BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,#1,#1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","Huh?
The closing cash register balance
isn't correct......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("I460600006_06_000");
    MsgDisp("Himuro","......Didn't you use the register for
a customer right before closing?");
    MsgDisp("主人公","Ah!");
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","There it is......");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600006_06_010");
    MsgDisp("Himuro","Thought so.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_020");
    MsgDisp("Himuro","Are you feeling okay?
Well, no harm done.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_030");
    MsgDisp("Himuro","The exchange of money here is the
most important thing. Careful with it.");
    MsgDisp("主人公","Got it, thanks.");
    MsgDisp("主人公","(I can't let my guard down.
I have to get it together......!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_656",0,0.6);
    Wait(50,0);
    MsgDisp("主人公","Alright, \"1 Rich for 4 items\".");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_040");
    MsgDisp("Himuro","Wrong.
1 Rich for 5 items.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_050");
    MsgDisp("Himuro","Get it together.
That was last week's price.");
    MsgDisp("主人公","Ah, sorry......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_060");
    MsgDisp("Himuro","No prob.
There's no problem if you rewrite that.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600006_06_070");
    MsgDisp("Himuro","But, this isn't like you.
Got something on your mind?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I460600006_06_080");
    MsgDisp("Himuro","Well, as long as you don't forget
your motivation.");
    MsgDisp("主人公","You're right.
Thanks.");
    MsgDisp("主人公","(I'm glad ｛氷室＊＊｝ said that.
Let's get it together......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
