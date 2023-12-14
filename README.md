hamza-CCCLVI
hamzaccclvi
Online

hamza-CCCLVI — 07/27/2022 6:02 PM
https://www.calculator.net/ip-subnet-calculator.html
IP Subnet Calculator
This IP subnet calculator covers both IPv4 and IPv6 protocols, providing information such as IP address, network address, subnet mask, IP range, and more.
https://web.stanford.edu/class/msande91si/www-spr04/readings/week1/InternetWhitepaper.htm
How Does the Internet Work?
A slightly technical whitepaper explaining what makes the Internet tick.
hamza-CCCLVI — 10/01/2022 11:22 AM
https://www.youtube.com/watch?v=yDkv5ypOfoU&ab_channel=TexasAdvancedComputingCenter(TACC)
YouTube
Texas Advanced Computing Center (TACC)
C++ for C Programmers 2.19.2021
Image
https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&ab_channel=TheCherno
YouTube
The Cherno
Welcome to C++
Image
aouhadou — 10/01/2022 12:06 PM
https://scrimba.com/learn/learnjavascript/lets-build-a-passenger-counter-app-co2614d6890ec26cd3fdafdbc
Scrimba
Let's build a passenger counter app!
Learn to code with interactive screencasts. Our courses and tutorials will teach you React, Vue, Angular, JavaScript, HTML, CSS, and more. Scrimba is the fun and easy way to learn web development.
Let's build a passenger counter app!
hamza-CCCLVI — 10/27/2022 6:48 PM
https://stackoverflow.com/questions/33739066/g-wshadow-doesnt-warn-about-static-member-shadowing
Stack Overflow
G++ -Wshadow doesn't warn about static member shadowing
Once again I lost some hours because of mere stupidity which could have been recognized by the compiler. This is the source code in question:

class f {
static int mVar;
int g(int x) { int ...
Image
hamza-CCCLVI — 11/01/2022 12:26 PM
outfile     << "           ,@@@@@@@," << std::endl
                << "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
                << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
                << ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
                   << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
                << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
                   << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
                << "    |o|        | |         | |" << std::endl
                << "    |.|        | |         | |" << std::endl
                << " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";

    outfile.close();
`
aouhadou — 11/12/2022 6:07 PM
https://www.bogotobogo.com/cplusplus/templates.php
C++ Tutorial: Templates - 2020
C++ Tutorial: Templates
https://www.bogotobogo.com/cplusplus/template_declaration_definition_header_implementation_file.php
C++ Tutorial: Template implementation & Compiler  (.h or .cpp?) - 2020
C++ Tutorial: Templates,
Why can templates only be implemented in the header file?
Why should the implementation and the declaration of a class template be in the same header file?
Why do class template functions have to be declared in the same translation unit?
Do class template member function implementations always have to go in the header f...
hamza-CCCLVI — 11/18/2022 11:33 AM
https://bigpel66.oopy.io/library/42/reference/20
Inception
Inception
Docker Compose Example
Inception
aouhadou — 11/18/2022 1:41 PM
layhfdek auda hamza
hamza-CCCLVI — 11/18/2022 3:46 PM
hania
https://www.youtube.com/watch?v=3c-iBn73dDE
YouTube
TechWorld with Nana
Docker Tutorial for Beginners [FULL COURSE in 3 Hours]
Image
aouhadou — 11/18/2022 4:10 PM
wax hasni nkhdem b ubunto ola darori debian
hamza-CCCLVI — 11/18/2022 4:11 PM
La maxi darori
aouhadou — 11/18/2022 4:11 PM
sf layhfdek
aouhadou — 12/11/2022 8:55 PM
https://chat.openai.com/chat
hamza-CCCLVI — 12/12/2022 4:57 PM
https://stackoverflow.com/questions/11990708/error-cant-connect-to-local-mysql-server-through-socket-var-run-mysqld-mysq
Stack Overflow
error: 'Can't connect to local MySQL server through socket '/var/ru...
My problem started off with me not being able to log in as root any more on my mysql install. I was attempting to run mysql without passwords turned on... but whenever I ran the command
# mysqld_s...
Image
aouhadou — 12/12/2022 4:57 PM
itoub
hamza-CCCLVI — 12/24/2022 12:00 PM
https://www.howtoforge.com/install-adminer-database-management-tool-on-debian-10/
HowtoForge
Install Adminer Database Management Tool on Debian 10
Managing database systems like MySQL, PostgreSQL, Oracle, and SQLite form the web-based UI is easier than using the command-line tool. Adminer is one ...
Image
aouhadou — 12/24/2022 3:02 PM
curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
chmod +x wp-cli.phar
mv wp-cli.phar /usr/local/bin/wp 
sed -i -e 's/listen =.*/listen = 9000/g' /etc/php/7.3/fpm/pool.d/www.conf
wp core download --path="/var/www/html"  --allow-root
chown -R www-data:www-data /var/www/html
wp config create --dbname=$MYSQL_DATABASE --dbuser=$MYSQL_USER --dbpass=$MYSQL_PASSWORD --dbhost=$MYSQL_HOST --path=/var/www/html --allow-root --skip-check --extra-php <<PHP
define( 'WP_REDIS_HOST', 'redis' );
define( 'WP_REDIS_PORT', 6379 );
define('WP_REDIS_DISABLED', false);
PHP
wp core install --url=$DOMAIN_NAME --title=$title --admin_user=$admin_user --admin_password=$admin_password --admin_email=$admin_email --allow-root --path=/var/www/html
wp user create aouhadou aouhadou1@gmail.com --user_pass=$MYSQL_PASSWORD --role=author --allow-root --path=/var/www/html/
service php7.3-fpm start
wp plugin install redis-cache --path=/var/www/html --allow-root
wp plugin activate redis-cache --path=/var/www/html --allow-root
wp redis enable --path=/var/www/html --allow-root
service php7.3-fpm stop
php-fpm7.3 -F
aouhadou — 12/25/2022 8:37 PM
https://www.digitalocean.com/community/tutorials/how-to-set-up-vsftpd-for-a-user-s-directory-on-debian-10
How To Set Up vsftpd for a User’s Directory on Debian 10  | Digital...
FTP, short for File Transfer Protocol, is a network protocol that was once widely used for moving files between a client and server. It has since been replac…
Image
hamza-CCCLVI — 01/23/2023 1:22 PM
wax a ba azzedine
aouhadou — 01/23/2023 1:23 PM
waz a ba hamza hanya
hamza-CCCLVI — 01/23/2023 1:23 PM
hamdolah
galia lmoumni axno daro m3ak
solokat o sf
atherek l dar ola ??
aouhadou — 01/23/2023 1:25 PM
audi db ma3endi mandir mn ghit nselek
aouhadou — 01/23/2023 1:25 PM
ana db f benguerir
hamza-CCCLVI — 01/23/2023 1:27 PM
ate3ber 3liha ila deberti fxi stage men db
aouhadou — 01/23/2023 1:31 PM
audi kont dakxi li ghandir
walakin  fax jit 3end nordine galia la
kmel dakxi li ba9i oji  dwez m3ana stage
sf db rah kdam 3la container o kan9ra lweb
hamza-CCCLVI — 01/23/2023 1:32 PM
men lkhir hta hia
aouhadou — 01/23/2023 1:34 PM
ta doz had xheryane
hamza-CCCLVI — 03/13/2023 1:43 PM
wax a ba azzedin
mazal ola ??
aouhadou — 03/16/2023 10:55 AM
Wax a Hamza
aouhadou — 09/21/2023 4:06 PM
https://godly.website/
Godly — Astronomically good web design inspiration
Godly is a curation of the best web design inspiration, every day. Browse the best e-commerce websites, portfolio websites, animation websites and more.
Godly — Astronomically good web design inspiration
aouhadou — 12/04/2023 5:29 PM
wax a hamza cv
kayn wahd match gheda f 9a3a t9ser
hamza-CCCLVI — 12/07/2023 4:46 PM
azedin mazal 3a9el 3la dak website dial les cv li kenti weritini wahd nhar
aouhadou — 12/07/2023 4:47 PM
wax fax kat9ad cv ola bax katchiki wax mzyan
https://www.overleaf.com/latex/templates/tagged/cv
Templates - Journals, CVs, Presentations, Reports and More
An online LaTeX editor that’s easy to use. No installation, real-time collaboration, version control, hundreds of LaTeX templates, and more.
Image
hamza-CCCLVI — 12/07/2023 4:48 PM
ah howa hada
lah itoub 3lik
aouhadou — 12/07/2023 4:48 PM
mrehaba
aouhadou — Today at 11:18 AM
# MINISHELL
minishell is a Unix-like shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)) language by [@xperaz](https://github.com/xperaz) and [@Ouzzhamza](https://github.com/Ouzzhamza), this shell was inspired by [Bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)).
This project was done in pairs.
## Content
- [Instructions](#features)
- [Brief Summary](#brief-summary) 
Expand
message.txt
6 KB
﻿
aouhadou
aouhadou
https://www.azedineouhadou.tech/
# MINISHELL
minishell is a Unix-like shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)) language by [@xperaz](https://github.com/xperaz) and [@Ouzzhamza](https://github.com/Ouzzhamza), this shell was inspired by [Bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)).
This project was done in pairs.
## Content
- [Instructions](#features)
- [Brief Summary](#brief-summary) 
- [Resources](#resources)

# Instructions
project must be written in C.

- Our functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, The project will be
considered non functional and will receive a 0 during the evaluation.

- All heap allocated memory space must be properly freed when necessary. No leaks
will be tolerated.

-  Must submit a Makefile which will compile Our
source files to the required output with the flags -Wall, -Wextra and -Werror, use
cc, and your Makefile must not relink.

- Our Makefile must at least contain the rules $(NAME), all, clean, fclean and
re.

- We allowed to use libft (consists of coding basic and useful C functions).


Our shell should:
- Display a prompt when waiting for a new command.
- Have a working history.
- Search and launch the right executable (based on the PATH variable or using a
relative or an absolute path).
- Not use more than one global variable. Think about it. You will have to explain
its purpose.

- Not interpret unclosed quotes or special characters which are not required by the
subject such as \ (backslash) or ; (semicolon).
- Handle ’ (single quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence.
- Handle " (double quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence except for $ (dollar sign).
- Implement redirections:
  - < should redirect input.
  - > should redirect output.
  - << should be given a delimiter, then read the input until a line containing the
delimiter is seen. However, it doesn’t have to update the history
  - >> should redirect output in append mode.
  
- Implement pipes (| character). The output of each command in the pipeline is
connected to the input of the next command via a pipe.

- Handle environment variables ($ followed by a sequence of characters) which
should expand to their values.

- Handle $? which should expand to the exit status of the most recently executed
foreground pipeline.

- Handle ctrl-C, ctrl-D and ctrl-\ which should behave like in bash.
- In interactive mode:
  - ctrl-C displays a new prompt on a new line.
  - ctrl-D exits the shell.
  - ctrl-\ does nothing.
  
- Our shell must implement the following builtins:
  - echo with option -n
  - cd with only a relative or absolute path
  - pwd with no options
  - export with no options
  - unset with no options
  - env with no options or arguments
  - exit with no options

# Brief Summary
A minishell (in it's simplest form) will extract a full command line (breaking the while loop when it reaches \n) and analyzing it. To follow the initial logic, we're using readline() function.\
This `command line` goes through many phases before being executed and showing the result.

First it goes through a [toknizer](/sources/parse/tokenizer.c), which splits the input into a "valid" list of tokens.

Second, [Syntax validation](/sources/parse/syntax_validation.c): It goes through the doubly linked list of tokens,
and checks for syntax errors at every node. This is done by looking at the left and the right of the current node.
if some strange or some unexpected token is encountered, an error is printed to `stderr`.
[Bellow](#syntax-rules) are the rules of the syntax analyser.
      
third, the [expander](/sources/parse/expander.c) wich expand variables to their values.
    
Last, the [parser](/sources/parse/parser.c) regroup list of command to be sent to the executor wich the final step of the project.
    
## Syntax Rules
````
- UNEXPECTED TOKENS:
	- `;;' (this token is always unrecognized in bash and zsh shells)

* AND, OR, PIPE, FG, BG:
	- left: [WSPACE] (STRING | CPAR)
	- right: [WSPACE] (STRING | REDIRECT | OPAR | if <FG, BG> ENDOFCMD)

* OPAR "(":
	- left: CMDBEGIN | [WSPACE] (AND | OR | PIPE | OPAR)
	- right: [WSPACE] (STRING | REDIRECT | OPAR)

* CPAR ")":
	- left: [WSPACE] (STRING | CPAR)
	- right: [WSPACE] (AND | OR | PIPE | CPAR | ENDOFCMD)

* REDIRECT:
	- right: [WSPACE] STRING

* PARENTHESES MATCHING AND QUOTING:
	- inside each pair parentheses should not be an empthy command.
	- every open parentheses has to have a matching closing parentheses.
	- every single/double quote have to be closed.
````

# Resources
- [minishell docs](https://harm-smits.github.io/42docs/projects/minishell)
- [minishell Materials](https://www.notion.so/Minishell-Materials-7bbd45a806e04395ab578ca3f805806c)
- [XV6's Shell Code Explained - A great source of inspiration](https://www.youtube.com/playlist?list=PLbtzT1TYeoMhF4hcpEiCsOeN13zqrzBJq)
message.txt
6 KB
