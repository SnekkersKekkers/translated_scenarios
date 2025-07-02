BGOpen("sc510",1);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(......Huh? It's a message from
｛氷室＊＊｝. It says \"I'd like to talk,
do you have time?\"......)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,2,2,1,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","(It's been a while since he came
out of the water but......｛氷室＊＊｝
hasn't said a word at all......)");
while (1){
    RunEverydaySksp(6,0,0,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    BGMVol(0.5,2);
    ChEye(6,2);
    ChMouth(6,1);
    ChMotion(6,2);
    VoicePlay("G110600200_06_010");
    MsgDisp("Himuro","What if it wasn't just me......Haa.");
    }
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600200_06_030");
MsgDisp("Himuro","Ah, yes......
Sorry for calling you out so suddenly.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600200_06_040");
MsgDisp("Himuro","......The chocolate was delicious.");
MsgDisp("主人公","Eh?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600200_06_050");
MsgDisp("Himuro","Don't make me say it twice. You know the
valentine's chocolate you gave me? It was
delicious! That's all.");
MsgDisp("主人公","Ah! I'm glad.
Maybe it's because I tried my best.
......Is that what you came here to say?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600200_06_060");
MsgDisp("Himuro","......Is that a problem?");
MsgDisp("主人公","No, no!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600200_06_070");
MsgDisp("Himuro","Then......did other guys receive any?
Homemade chocolates that is.");
MsgDisp("主人公","As for handmade chocolates, I only gave
them to ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
ChCheek(6,10);
VoicePlay("G110600200_06_080");
MsgDisp("Himuro","Ah, is that so.
It was worthwhile of tasting and eating.");
MsgDisp("主人公","Shall I make it again?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600200_06_090");
MsgDisp("Himuro","Even if they're readily made easily, 
The meaning behind them is complex......");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600200_06_100");
MsgDisp("Himuro","But it's a nice thing to receive around
that time.");
MsgDisp("主人公","Valentines?");
ChEye(6,2);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600200_06_110");
MsgDisp("Himuro","Well......yeah.
Then next year too......");
MsgDisp("主人公","Hm?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600200_06_120");
MsgDisp("Himuro","It's nothing! It looks like there's some
nice waves coming, I'm off!");
MsgDisp("主人公","（｛氷室＊＊｝……?）");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
