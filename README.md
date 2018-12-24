# EnsaiosCMaisMais
Academico

git status
git add <file name>
git status #para confirmar
git commit -m "comentario"
git push otigin master


#Sincronizar PC com GH
       #Descarrega APP do GH
         git clone https://github.com/<name>/<folder>.git
         Depois de criada a pasta é necessário entrar nela por CD <path>
            #Confirma link
             git remote -v
        # sincronizar
          git remote set-url origin https://github.com/<name>/<folder>.git

#CArregar app no gh Depois de sincronizado
 git push -u origin master