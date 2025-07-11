BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","The store is...... yeah, seems fine.
Let's clean up soon.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,3,-1,0,0,0);
    VoicePlay("I360400004_04_000");
    MsgDisp("Nanatsumori","…………");
    MsgDisp("主人公","Ah, an order just came up.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400004_04_010");
    MsgDisp("Nanatsumori","Oh.
Think it's mine.");
    MsgDisp("主人公","Thank you for waiting.
Here is your pear and custard tart.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I360400004_04_020");
    MsgDisp("Nanatsumori","Thank you.
.........");
    MsgDisp("主人公","......Hm?
Is there something else
I can help you with?");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("I360400004_04_030");
    MsgDisp("Nanatsumori","I was impressed at your good work.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400004_04_040");
    MsgDisp("Nanatsumori","The pear tart looks damn good......!
Pictures, pictures......");
    MsgDisp("主人公","(Hehe!
｛七ツ森＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","The store is...... yeah, seems fine.
Let's clean up soon.");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,3,-1,-1,0,0);
    ChMotion(4,1,1);
    VoicePlay("I360400004_04_050");
    MsgDisp("Nanatsumori","......I see, I see.");
    MsgDisp("主人公","Ah, an order just came up.");
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("I360400004_04_060");
    MsgDisp("Nanatsumori","......Oh, she noticed quick.");
    MsgDisp("主人公","Thank you for waiting.
Here is your pear and custard tart.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400004_04_070");
    MsgDisp("Nanatsumori","I sure waited.");
    MsgDisp("主人公","｛七ツ森＊｝, have you been
whispering something for a while now?");
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("I360400004_04_080");
    MsgDisp("Nanatsumori","Hm? I've been adding commentary
to your actions......");
    MsgDisp("主人公","Hm?
You didn't take a video, did yo-");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400004_04_090");
    MsgDisp("Nanatsumori","'Course not!
......Geez.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("I360400004_04_100");
    MsgDisp("Nanatsumori","You're getting so used to this
shop, it brings a tear to my eye that I
can finally savor my coffee and sweets.");
    MsgDisp("主人公","Geez......
But, do you mean it?");
    ChMotion(4,0,1);
    VoicePlay("I360400004_04_110");
    MsgDisp("Nanatsumori","Yeah.
You're completely used to it.");
    MsgDisp("主人公","(Hehe!
｛七ツ森＊｝ praised me!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
