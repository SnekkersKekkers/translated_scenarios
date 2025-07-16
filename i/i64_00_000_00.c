BGOpen("ho210",0);
ChLayout(1);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I640000000_08_000");
MsgDisp("Shirahane","Yes, it's Stallion Gasoline!");
MsgDisp("主人公","I'm
｛主人公苗字｝.
Oh, is that you, ｛大地＊＊｝?");
VoicePlay("I640000000_08_010");
MsgDisp("Shirahane","Oh, it's you!
What're you doin' callin' here?");
MsgDisp("主人公","Um......
I was thinking of quitting my part-time
job......");
VoicePlay("I640000000_08_020");
MsgDisp("Shirahane","∋");
MsgDisp("主人公","｛大地＊＊｝?");
VoicePlay("I640000000_08_030");
MsgDisp("Shirahane","Are ya really quittin'......?");
MsgSel("Actually, I'll continue","Quit.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Ah......
Actually, forget it!");
    VoicePlay("I640000000_08_040");
    MsgDisp("Shirahane","Huh?");
    MsgDisp("主人公","I won't quit.
｛大地＊＊｝, sorry.
For surprising you.");
    VoicePlay("I640000000_08_050");
    MsgDisp("Shirahane","R-Really!
I just about stopped breathing......");
    VoicePlay("I640000000_08_060");
    MsgDisp("Shirahane","Alright, I'll see you at work～!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yeah, let's keep this part-time job a
little longer.)");
    break ;
    case 1:
    MsgDisp("主人公","Yeah, I'm quitting.
Sorry......");
    VoicePlay("I640000000_08_070");
    MsgDisp("Shirahane","............");
    VoicePlay("I640000000_08_080");
    MsgDisp("Shirahane","Got it.
I'll tell the manager.");
    VoicePlay("I640000000_08_090");
    MsgDisp("Shirahane","We won't be seeing each other, I
guess......
See ya.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","It's not like we can't-
｛大地＊＊｝ seemed really
sad...... I wonder if I did the right
thing.");
    MsgDisp("","(I quit my job at Stallion Gasoline.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
