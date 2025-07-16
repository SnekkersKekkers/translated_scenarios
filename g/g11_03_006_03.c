BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","I'm redecorating the store today.");
VoicePlay("G110300603_03_000");
MsgDisp("Honda?","Woooooah～∈");
MsgDisp("主人公","Huh, ｛本多＊＊｝, are you okay∋");
MsgDisp("主人公","(Aah, I have to get his book...!)");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
MsgClose();
SEWait();
BGMPlay("BGM_C03_HONDA_A");
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,#1,#1,0,0);
MsgClose();
ScrFadeIn(0);
while (1){
    RunEverydaySksp(3,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("G110300603_03_030");
    MsgDisp("Honda","Woah woah, stop stop!
If you touch that part, the book will
break!");
    }
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,1);
VoiceEVSPlay(3);
VoicePlay("G110300603_03_010");
MsgDisp("Honda","｛主人公｝.
Thank you for saving my life.");
MsgDisp("主人公","I'm so glad.
｛本多＊＊｝, I was surprised when
I heard your voice.");
ChEye(3,2);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300603_03_040");
MsgDisp("Honda","Yeah, I had a valuable book with me, so I
just screamed out loud.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G110300603_03_050");
MsgDisp("Honda","It's the first edition of \"The Way of
First Love\". It's signed by the author in
the back, see?");
MsgDisp("主人公","(Phew, I'm glad I didn't damage his
precious book...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
