MsgClose();
BGOpen("sc511",0);
ChLayout(1);
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛七ツ森＊｝!");
    ChMouthOpenLevel(4,0);
    VoicePlay("K010400100_04_000");
    MsgDisp("Nanatsumori","......");
    MsgDisp("主人公","Um...... Today's your birthday, right?
Here's a birthday present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChMotion(4,1,1);
    ChMouthOpenLevel(4,#1);
    VoicePlay("K010400100_04_010");
    MsgDisp("Nanatsumori","For me?");
    MsgDisp("主人公","Yes, for ｛七ツ森＊｝.");
    break ;
    case 3:
    MsgDisp("主人公","｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("K010400100_04_020");
    MsgDisp("Nanatsumori","You're loud as usual......
What is it?");
    MsgDisp("主人公","Happy birthday.
Here's a birthday present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("K010400100_04_030");
    MsgDisp("Nanatsumori","Thanks for this.
I'm surprised you remembered.");
    MsgDisp("主人公","Hehe.
Hey, try opening it.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛七ツ森＊｝!");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("K010400100_04_040");
    MsgDisp("Nanatsumori","...... Come here a little quieter next
time.");
    MsgDisp("主人公","Ah, sorry......
｛七ツ森＊｝, happy birthday.
Here's a birthday present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("K010400100_04_050");
    MsgDisp("Nanatsumori","Aah. ......Giving it to me so openly in
school frustrates me a little.");
    MsgDisp("主人公","Frustrates......?
What do you mean?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("K010400100_04_060");
    MsgDisp("Nanatsumori","It's fine if you don't understand.
Can I open this?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
