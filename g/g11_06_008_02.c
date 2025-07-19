BGOpen("ar200",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,35,0,0,0,#1,#1,0,0);
VoicePlay("G110600802_06_000");
MsgDisp("Himuro","Nice work.
Are you going home?");
MsgDisp("主人公","Yeah, why?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600802_06_010");
MsgDisp("Himuro","I'm thinking of walking by the shore,
wanna come?");
MsgDisp("主人公","Huh, are you going to surf?
Why not!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("G110600802_06_020");
MsgDisp("Himuro","Why are you so excited?
Okay, I'll go get dressed.");
MsgDisp("主人公","Okay!");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600802_06_030");
MsgDisp("Himuro","It's become so normal to see you at my
part time job.");
MsgDisp("主人公","Really?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("G110600802_06_040");
MsgDisp("Himuro","Yeah.
Before I knew it, you started entering my
life too much.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600802_06_050");
MsgDisp("Himuro","But, I don't mind it.");
MsgDisp("主人公","...Hehe.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600802_06_060");
MsgDisp("Himuro","What?");
MsgDisp("主人公","For some reason, that made me laugh...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600802_06_070");
MsgDisp("Himuro","I'm not sure what makes it funny.");
MsgDisp("主人公","(...Huh, ｛氷室＊＊｝, is your face red...?)");
while (1){
    RunEverydaySksp(6,0,1,0,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,10);
    VoicePlay("G110600802_06_080");
    MsgDisp("Himuro","W-Wha∋
W-What are you talking about.
I'm just still soaked.");
    }
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600802_06_110");
MsgDisp("Himuro","Huh...my face is not that red.
The sun is just setting.");
MsgDisp("主人公","Hmm?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,5);
VoicePlay("G110600802_06_120");
MsgDisp("Himuro","What?
If you have something to say, why don't
you just say it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600802_06_130");
MsgDisp("Himuro","It's rude to smile at someone's face.");
MsgDisp("主人公","Huh, was I smiling?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600802_06_140");
MsgDisp("Himuro","You smile all the time.");
MsgDisp("主人公","Huuh∋");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
