ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600000_06_000");
    MsgDisp("Himuro","First place, huh...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600000_06_010");
    MsgDisp("Himuro","It's surprisingly good. W-Well, as long as
it's not a fluke, I mean.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    MsgDisp("主人公","(Yes, I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600000_06_020");
    MsgDisp("Himuro","The top rank...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("N020600000_06_030");
    MsgDisp("Himuro","Well, it's definitely not impossible.");
    MsgDisp("主人公","Huh, what is?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600000_06_040");
    MsgDisp("Himuro","I know you work harder than anyone else on
a daily basis. These results prove that...
Right?");
    MsgDisp("主人公","(Yeah, I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,3,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("N020600000_06_050");
    MsgDisp("Himuro","｛主人公｝...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600000_06_060");
    MsgDisp("Himuro","Top student in your grade.
You did it.");
    MsgDisp("主人公","Hehe, I did!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("N020600000_06_070");
    MsgDisp("Himuro","These results are only natural when I
think about what you do every day.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("N020600000_06_080");
    MsgDisp("Himuro","But seriously, congratulations.
I'm really proud of you.");
    MsgDisp("主人公","(Yeah, I did my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
