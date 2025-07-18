BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(There aren't many customers today...)");
    VoiceEVSPlay(1);
    VoicePlay("I160100006_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,2,#1,#1,0,0);
    MsgDisp("主人公","What is it, ｛風真＊＊｝?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("I160100006_01_010");
    MsgDisp("Kazama","What else?
Don't space out while we're open.");
    MsgDisp("主人公","...Ah!
I, I'm sorry.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100006_01_020");
    MsgDisp("Kazama","This isn't like you.
No matter how much experience you have,
it's over once you lose the tension.");
    MsgDisp("主人公","(That's right.
I need to get it together...!)");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(1);
    VoicePlay("I160100006_01_030");
    MsgDisp("Kazama","｛主人公｝.");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,4,2,#1,#1,0,0);
    MsgDisp("主人公","What is it, ｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("I160100006_01_040");
    MsgDisp("Kazama","What else.
The center display is the exact same as
last month's, right?");
    MsgDisp("主人公","...Ah!
I, I'm sorry.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100006_01_050");
    MsgDisp("Kazama","Didn't I tell you that I'd leave it up to
you? Simon's customers are sensitive to
this kind of thing.");
    MsgDisp("主人公","(Aah, just when I had my chance...
I need to get it together...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
