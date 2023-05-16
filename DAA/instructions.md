# Instructions

You could do this in a number of ways. I recommend the [command line way](#command-line-way-aka-chad-way) or the [online](#online) way for noobs (no shame in being a noob).

## Command line way a.k.a _Chad way_

Pre-requisite: Have [git](https://git-scm.com/downloads) installed on your computer as well as [soffice](https://www.systutorials.com/docs/linux/man/1-soffice/), both come pre-installed in most "just works" Linux distros (another reason for using Linux).

* Change the font if you can after cloning [the repository](https://github.com/0thorderlogic/cs), helps a lot.

```
git clone https://github.com/0thorderlogic/cs.git

echo "Aryan is the best!"

cd cs/DAA/docs

soffice --convert-to pdf *.odt  
```

## Libre office way

This year 2023 you can submit the assignments as a printout form.
Now, this may change, at any given time. 

Now you will find a [`docs`](https://github.com/0thorderlogic/cs/tree/master/DAA/docs) folder with files named `01.odt`, `02.odt`, ...... `0N.odt` also another file called [`daa_assignment.ott`](https://github.com/0thorderlogic/cs/blob/master/DAA/docs/daa_assignment.ott) an OTT file is a document template. This is the template I followed and you could too.

I am using [Libre office](https://www.libreoffice.org/) on [Fedora linux](https://getfedora.org/) because I am cool like that. You could install libre office on windows too if you want.

After you have Libre office and the necessary files (`01.odt`, `02.odt`, ...... `0N.odt`) from the [`docs`](https://github.com/0thorderlogic/cs/tree/master/DAA/docs) folder open these up in [Libre office writer](https://www.libreoffice.org/discover/writer/) do this:

```
STEP 1: OPEN FILE using LIBRE OFFICE WRITER
STEP 2: Change font for both text and code.
STEP 3: PRESS `alt+f` or the `File` button on the top left
STEP 4: In the drop-down menu, navigate below to Export as 
STEP 5: Click Export directly as PDF
```

You are done!

## Online

Alternatively, you can visit [this here website](https://online2pdf.com/convert-odt-to-pdf) and upload all files as you need and get a merged pdf!

* Note: try disabling the ad-blocker if you want to support this website or [donate](https://online2pdf.com/donation) them outright. 

## Last resort

*  Only for batches after 2021-2022

There is a good chance you will get the same questions we got this year 10 years down the line, you could find a file called the [`master.pdf`](https://github.com/0thorderlogic/cs/blob/master/DAA/docs/master.pdf).

## Questions 

1. Linear Search and Binary Search.  
2. Merge Sort and Quick Sort. 
3. Knapsack and Job Sequencing with deadlines. 
4. MST by Prim's and Kruskal's Algorithm. 
5. Dijkstra algorithm and Bellman Ford algorithm. 
6. Floyed Warshall Algorithm. 
7. Traveling Salesman problem. 
8. Implementation of BFS and DFS. 
9. Matrix Chain Multiplication. 
10. Implement N Queen problem. 
11. Graph coloring problem. 
12. Implement 15 Puzzle Problem.
