BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730600001_06_000");
    MsgDisp("Himuro","It's amazing huh, that dress.");
    MsgDisp("主人公","Ah,｛氷室＊＊｝.
Did you come to watch?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600001_06_010");
    MsgDisp("Himuro","More or less.
It's because I heard you went all out.");
    MsgDisp("主人公","Yeah.
For the sake of today,
I gave it my best but...");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P730600001_06_020");
    MsgDisp("Himuro","What? Do you not have any confidence?");
    MsgDisp("主人公","No, it's not because of that.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600001_06_030");
    MsgDisp("Himuro","Then seems like there's no problem.
Stand up straight.");
    MsgDisp("主人公","...Yes!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600001_06_040");
    MsgDisp("Himuro","That's more like it.
Have fun.");
    MsgDisp("主人公","(Alright, I have to stand proud...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730600001_06_050");
    MsgDisp("Himuro","Eh...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Did you come to watch?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("P730600001_06_060");
    MsgDisp("Himuro","What? IS there a problem with me coming to
watch?");
    MsgDisp("主人公","No! I'm happy that you did..");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("P730600001_06_070");
    MsgDisp("Himuro","Ah, right.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600001_06_080");
    MsgDisp("Himuro","………………");
    MsgDisp("主人公","What's wrong?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600001_06_090");
    MsgDisp("Himuro","... Suits you.");
    MsgDisp("主人公","Eh?");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("P730600001_06_100");
    MsgDisp("Himuro","I won't say it again!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,4);
    VoicePlay("P730600001_06_110");
    MsgDisp("Himuro","Hey, it's starting!
Are you going?");
    MsgDisp("主人公","Y-yeah...!");
    MsgDisp("主人公","(He said it suits me right?
Alright, let's hold my chin up high!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
