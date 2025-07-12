BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Which way are you headed?
......Yes, to the left, please.");
    MsgDisp("主人公","Yes, okay.
Thank you very much!");
    SEPlay("EV_SE_589",1);
    Wait(50,0);
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    SEStop("EV_SE_589",1);
    MsgClose();
    ChOpen(8,35,0,4,0,#1,#1,0,0);
    VoicePlay("I660800002_08_000");
    MsgDisp("Shirahane","How bright......");
    MsgDisp("主人公","Ah, ｛大地＊＊｝.
What is?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800002_08_010");
    MsgDisp("Shirahane","Your customer service 
and guiding.
Full points!");
    MsgDisp("主人公","Really?");
    VoicePlay("I660800002_08_020");
    MsgDisp("Shirahane","I ain't lying.
Well, lemme learn from you!");
    MsgDisp("主人公","(Yay!
｛大地＊＊｝ praised me.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Which way are you headed?
......Yes, to the left, please.");
    MsgDisp("主人公","Yes, okay.
Thank you very much!");
    SEPlay("EV_SE_589",1);
    VoicePlay("I660800002_39_000");
    MsgDisp("Male Customer","See you!");
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    SEStop("EV_SE_589",1);
    MsgClose();
    ChOpen(8,35,2,2,4,#1,#1,0,0);
    VoicePlay("I660800002_08_030");
    MsgDisp("Shirahane","Ah no......");
    MsgDisp("主人公","｛大地＊＊｝.
Huh, did I make a mistake somewhere?");
    ChMotion(8,0,1);
    VoicePlay("I660800002_08_040");
    MsgDisp("Shirahane","Nah.
Ya got 100 points from me.");
    MsgDisp("主人公","R-Really?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("I660800002_08_050");
    MsgDisp("Shirahane","Feels like more and more customers
have been comin' here jus' for you......");
    MsgDisp("主人公","Not at all......
｛大地＊＊｝, you're overthinking it.");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800002_08_060");
    MsgDisp("Shirahane","You should be thinkin' a li'l more.
My jealousy's flarin'.");
    MsgDisp("主人公","(Being jealous of customers......
But, I got 100 points!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
