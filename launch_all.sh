# Affichage du nom su script
echo "Le nom de mon script est : $0"
# Affichage du nombre de paramètres
echo "Vous avez passé $# paramètres"

if [ $# -eq 0 ]
  then
    echo "You need to pass the name of a solver in argument"
    exit 1
fi

for instance in `ls instances/*.dat`
do 
  echo "$instance"
  build/ecma_launcher --instance=$instance --solver=$1 -v=1 --logFile="logs" --synRes=res/ --solDir=solutions/ --sizePalier=100 --ratio=18 --maxTime=500 --tempInit=1000
done