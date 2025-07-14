BGMStop(1.7);
Wait(60,0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(It's almost time to perform Haa, I'm so
anxious......)");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,38,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P230500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝. I' m getting nervous——");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P230500000_05_010");
    MsgDisp("Hiiragi","Yes, me too. Even though I've been
performing for ten odd years, the nerves I
feel when the curtain rises have never
changed.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P230500000_05_020");
    MsgDisp("Hiiragi","So, it's only natural that you would feel
nervous.");
    MsgDisp("主人公","Even chairman ｛柊＊＊＊｝ gets nervous?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P230500000_05_030");
    MsgDisp("Hiiragi","Yes. After all, this play was built on the
efforts of you and everyone else.");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("P230500000_05_040");
    MsgDisp("Hiiragi","For the sake of everyone who said they
were anticipating it, we will definitely
make this play a success.");
    MsgDisp("主人公","That's right...");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P230500000_05_050");
    MsgDisp("Hiiragi","Yes. However, actors are sly. They may
claim they perform for the audience, but
the joy of freely expressing themselves on
stage outweighs that.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P230500000_05_060");
    MsgDisp("Hiiragi","Of course the script is of importance.
But, the ones who are performing are you,
and me.");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("P230500000_05_070");
    MsgDisp("Hiiragi","Let's perform how we wish, while being
grateful towards everyone, okay?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P230500000_05_080");
    MsgDisp("Hiiragi","If everyone enjoys it, then it's a great
success.");
    MsgDisp("主人公","Yes, let's try to enjoy it.");
    VoicePlay("P230500001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("P230500000_05_090");
    MsgDisp("Hiiragi","That's a nice expression.
Let's fall in love on stage?");
    MsgDisp("主人公","Hehe, yes.");
    MsgClose();
    ScrFadeOut(0,0);
    ChCheek(5,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
