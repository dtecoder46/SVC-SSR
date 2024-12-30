# SVC
A fast SSR connector between a Vue front-end, a C++ server, and an SQLite database

License: MIT

Branches: 1

## How to Access

Find the SVC-SSR repository on GitHub. Navigate to the link provided on the right-hand side. Then type in the command: ./script.sh. Answer the favorite color prompt and press ENTER. The website should appear with the background color being your favorite color! It will also show the previous color input.

## Structure

### First Run

After C++ receives color input, it writes Vue syntax with the input color into the Vue file, and then uses the input to write CSS syntax that makes the web- site background take on the same color as the input. An execute function is activated, which stores the input into an SQLite database, completing the first run

### Second Run

To retrieve the first input, C++ reads the SQL file and removes unnecessary characters to extract the data. The input is integrated into the Vue markup to be displayed on the website

## Code of Conduct

Any user who forks this repository must abide by the following rules

1. Do not create a website using this template that
- Is discriminatory or racist
- Shows disregard for the poor or marginalized
- Is intended to be used for committing a crime

2. Any repository that breaks these regulations will be promptly reported

## Logo

![logo](SVC/SVC/public/logo.jpeg)
