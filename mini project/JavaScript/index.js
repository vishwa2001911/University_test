
const app = Vue.createApp({
    data() {
        return {
            name:null,
            email:null,
            message:null,
            validate:{
                name:false,
                email:false,
                message:false
            },
            allData:{}

        }
    },
    methods: {
        sendEmail() {
            console.log("massege sent")
        },
        validation(){
            if(this.name != null && this.name != null && this.name != null){
                this.sendEmail()
            }
            if (this.name == null) {
                this.validate.name = true;
            }if (this.email == null){
                this.validate.email = true;
            }if (this.message == null){
                this.validate.message = true;
            }

            

            
        }
    },
})
app.mount("#messageBox")