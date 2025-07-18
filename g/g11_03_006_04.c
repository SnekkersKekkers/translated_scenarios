BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, it seems like the wave of customers
have finally died down.)");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛本多＊＊｝.
Shouldn't the 15 minute break be any
moment now?");
ChEye(3,0);
ChMouth(3,2);
ChMotion(3,2);
VoicePlay("G110300604_03_000");
MsgDisp("Honda","Already?
Time flies when you're busy.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300604_03_010");
MsgDisp("Honda","That's right.
It's time for a sport the difference quiz!");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300604_03_020");
MsgDisp("Honda","Did you know I made a few changes to the
book in this section?");
MsgDisp("主人公","I'm a staff member here too?");
MsgDisp("主人公","(...Wait, what? ｛本多＊＊｝, did
you get a haircut?)");
while (1){
    RunEverydaySksp(3,1,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(3,0);
    ChMouth(3,1);
    ChMotion(3,2);
    VoicePlay("G110300604_03_040");
    MsgDisp("Honda","Haha, toooo bad.
I won't tell you the answer even if you
tickle me.");
    }
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300604_03_050");
MsgDisp("Honda","Beep beep!
That's right!
I cut my hair yesterday.");
ChEye(3,0);
ChMouth(3,2);
ChMotion(3,1);
VoicePlay("G110300604_03_060");
MsgDisp("Honda","...But did you hear the question
properly?
You accidentally got it right, but...");
MsgDisp("主人公","(Hehe!
Working part-time with
｛本多＊＊｝ is so fun!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
