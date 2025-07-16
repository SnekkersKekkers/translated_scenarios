BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_C",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H2A0600000_06_010");
    MsgDisp("Himuro","That member who won had a great
expression. It's thanks to your support,
right? Good work.");
    MsgDisp("主人公","(I'm glad that I stayed as the track and
field club manager!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_C",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0600000_06_020");
    MsgDisp("Himuro","Amazing......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H2A0600000_06_030");
    MsgDisp("Himuro","I didn't think you guys would actually
win.");
    MsgDisp("主人公","｛氷室＊＊｝!
Hehe, awesome, right?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("H2A0600000_06_040");
    MsgDisp("Himuro","It was the team that won, right?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600000_06_050");
    MsgDisp("Himuro","But well, I guess without your support,
this result wouldn't have happened.");
    MsgDisp("主人公","I hope so......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("H2A0600000_06_060");
    MsgDisp("Himuro","...... It kinda feels like you've gotten
further away.
It's a little frustrating.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H2A0600000_06_070");
    MsgDisp("Himuro","Nah......
Good work these past three years.");
    MsgDisp("主人公","(I'm glad that I stayed as the track and
field club manager......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
