BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    VoicePlay("P230200001_02_000");
    MsgDisp("Sassa","The Cerebus dogs are all set and ready on
standby.");
    MsgDisp("主人公","That's good.
Having real doggies come out on stage was
a good idea, huh?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("P230200001_02_010");
    MsgDisp("Sassa","Yeah.
A three-headed dog was impossible, but
three normal ones are doable.");
    MsgDisp("主人公","Hehe, yeah. The dogs were more attached to
｛颯砂＊＊｝ than the guy playing
Hades.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P230200001_02_020");
    MsgDisp("Sassa","Maybe they picked up the smell of dogs on
my body?");
    MsgDisp("主人公","Also, ｛颯砂＊＊｝ is quite big?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,5);
    VoicePlay("P230200001_02_030");
    MsgDisp("Sassa","Hey, don't treat people like big dogs!");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("P230200001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P230200001_02_040");
    MsgDisp("Sassa","Ah crap.
It's already starting.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    MsgDisp("主人公","Yeah, I hope it goes well!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(2,0);
ChMouth(2,0);
ChEyeOpenLevel(2,#1);
ChCheek(2,0);
