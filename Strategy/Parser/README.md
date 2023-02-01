# Design Pattern Strategy



Il existe plusieurs design patterns qui pourraient être utilisés pour résoudre ce problème. L'un d'eux est le pattern "Strategy", qui permet de dissocier l'algorithme de parsing du fichier d'entrée de la classe qui contient le dataset.

Voici comment vous pourriez implémenter ce pattern dans votre programme :

	1.Créez une interface "ParserStrategy" qui définit les méthodes nécessaires pour parser un fichier d'entrée.

	2.Créez une classe concrète pour chaque type de fichier d'entrée que vous souhaitez prendre en charge (par exemple, "CSVParser" pour les fichiers CSV, "JSONParser" pour les fichiers JSON, etc.). Chacune de ces classes implémentera l'interface "ParserStrategy".
	
	3.Dans votre classe de dataset, ajoutez une propriété de type "ParserStrategy" et une méthode pour remplir le dataset à partir d'un fichier d'entrée.

	4.Lorsque vous utilisez votre classe de dataset pour lire un fichier d'entrée, instanciez la bonne classe de parser en fonction du type de fichier d'entrée et passez-la à la méthode de remplissage du dataset.

Avec cette architecture, vous pourrez facilement ajouter de nouveaux types de fichiers d'entrée en créant de nouvelles classes de parseur qui implémentent l'interface "ParserStrategy" sans avoir à modifier le code de votre classe de dataset.


# Code

Voici un exemple de code qui implémente le pattern "Strategy" pour prendre en charge les fichiers CSV et JSON

```
// Interface ParserStrategy
class ParserStrategy {
 public:
  virtual void parse(std::string input_file, DataSet& dataset) = 0;
};

// Classe CSVParser
class CSVParser : public ParserStrategy {
 public:
  void parse(std::string input_file, DataSet& dataset) {
    // Code pour parser un fichier CSV et remplir le dataset
  }
};

// Classe JSONParser
class JSONParser : public ParserStrategy {
 public:
  void parse(std::string input_file, DataSet& dataset) {
    // Code pour parser un fichier JSON et remplir le dataset
  }
};

// Classe DataSet
class DataSet {
 private:
  ParserStrategy* parser_strategy_;
 public:
  void set_parser_strategy(ParserStrategy* parser_strategy) {
    parser_strategy_ = parser_strategy;
  }
  void fill_from_file(std::string input_file) {
    parser_strategy_->parse(input_file, *this);
  }
  // autres méthodes de la classe DataSet
};
```
