# Console Progress Printer
This is a very simple to use progress printer

It outputs text to the console like the following:

    0% 10% 20% 30% 40% 50% 60% 70% 80% 90% 100%
	
# Example
	ConsoleProgressPrinter progress(100);
	
	for(i = 0; i <= 100; i++){
		progress.UpdateProgress(i);
	}