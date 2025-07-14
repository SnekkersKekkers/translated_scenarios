ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700003_07_000");
    MsgDisp("Mikage","｛主人公｝. Are you okay? This isn't
like you.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("N020700003_07_010");
    MsgDisp("Mikage","You can usually get things right.
If you stay calm and keep at it, you can
do it, right?");
    MsgDisp("主人公","(I have to study harder...)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(7,254,3,2,0,#1,#1,0,0);
    VoicePlay("N020700003_07_020");
    MsgDisp("Mikage","Come on, this must be a joke.
This score is very concerning.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700003_07_030");
    MsgDisp("Mikage","Look. You're someone who can do really
well if you do it right.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("N020700003_07_040");
    MsgDisp("Mikage","But you can also be stubborn and decide
not to do it.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700003_07_050");
    MsgDisp("Mikage","Look, your potential extends everywhere.
Even in your studies.
Next time, do it right, okay?");
    MsgDisp("主人公","(｛御影＊＊｝... I have to study
harder...)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,0,2,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700003_07_060");
    MsgDisp("Mikage","｛主人公｝, this isn't funny at all.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("N020700003_07_070");
    MsgDisp("Mikage","Do you hate studying that much?");
    MsgDisp("主人公","Umm...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("N020700003_07_080");
    MsgDisp("Mikage","You don't have to do anything you don't
want to...
That's what you're thinking, right?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700003_07_090");
    MsgDisp("Mikage","Right? Nothing we do in high school is
unnecessary, okay?");
    MsgDisp("主人公","Okay...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("N020700003_07_100");
    MsgDisp("Mikage","It's all about helping you with what you
want to do.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("N020700003_07_110");
    MsgDisp("Mikage","If you agree, please study harder next
time.");
    MsgDisp("主人公","(｛御影＊＊｝, is really worried about
me...
I have to study harder...)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
