class Op_arre:
    def _init_(self,a):
        self.a = a
    #faltan getters setters y creacion del arreglo interno 
    def suma_m(self,a,b):
        if len(a)==len(b) and len(a[0])==len(b[0]):
            c=[]
            for i in range(len(a)):
                c.append([])
                for j in range(len(a[0])):
                    c[i].append(a[i][j]+b[i][j])
            return c
        else :
            return None            
    def resta_m(self,a,b):
        if len(a)==len(b) and len(a[0])==len(b[0]):
            c=[]
            for i in range(len(a)):
                c.append([])
                for j in range(len(a[0])):
                    c[i].append(a[i][j]-b[i][j])
            return c
        else :
            return None   
    def multiplicacion_m(self,a,b):
        return a+b  
    def division_m(self,a,b):
        return a+b                