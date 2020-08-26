writeln("This program is running on ", numLocales, " locales");

use Memory;  // for physicalMemory()
config const printLocaleInfo = true;  // permit testing to turn this off

if printLocaleInfo then
  for loc in Locales do
    on loc {
      writeln("locale #", here.id, "...");
      writeln("  ...is named: ", here.name);
      writeln("  ...has hostname: ", here.hostname);
      writeln("  ...has ", here.numPUs(), " processor cores");
      writeln("  ...has ", here.physicalMemory(unit=MemUnits.GB, retType=real),
              " GB of memory");
      writeln("  ...has ", here.maxTaskPar, " maximum parallelism");
    }
writeln();