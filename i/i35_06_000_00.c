BGOpen("ar100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!
Ah, ｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350600000_06_000");
    MsgDisp("Himuro","...Hello.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_010");
    MsgDisp("Himuro","Do you work here?");
    MsgDisp("主人公","Yes, that's right.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I350600000_06_020");
    MsgDisp("Himuro","Ah, I see.
See you.");
    MsgDisp("主人公","Huh!
You didn't come here to order?");
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350600000_06_030");
    MsgDisp("Himuro","It sucks to have to serve people you know.
For both of us.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(I guess ｛氷室＊＊｝ is looking out for me
in his own way?)");
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350600000_06_040");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I350600000_06_050");
    MsgDisp("Himuro","Not \"ah\".
I came as a customer, so treat me
properly.");
    MsgDisp("主人公","My apologies!
Please follow me to your seat.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_060");
    MsgDisp("Himuro","Thanks.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("I350600000_06_070");
    MsgDisp("Himuro","...Hm.
You're doing pretty good.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_080");
    MsgDisp("Himuro","Nothing.
Come on, hurry up.");
    MsgDisp("主人公","S-Sure.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_090");
    MsgDisp("Himuro","Your reply should be \"yes\".");
    MsgDisp("主人公","Y-Yes!");
    MsgDisp("主人公","(Ugh, this is making me nervous...)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!
Ah, ｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350600000_06_100");
    MsgDisp("Himuro","Hello.
Make any mistakes yet?");
    MsgDisp("主人公","Geez.
I haven't.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("I350600000_06_110");
    MsgDisp("Himuro","Ah, is that so.");
    VoicePlay("I350600000_36_000");
    MsgDisp("Male Customer","Excuse me.");
    MsgDisp("主人公","Yes, I'll be right there!
...Um.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("I350600000_06_120");
    MsgDisp("Himuro","It's fine, I'll just find a seat.");
    MsgDisp("主人公","Thanks.
I'll come later.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","(Phew, has it calmed down a little?)");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350600000_06_130");
    MsgDisp("Himuro","Thanks.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Thank you very much.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_140");
    MsgDisp("Himuro","...You smile too charmingly.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I350600000_06_150");
    MsgDisp("Himuro","If you serve customers with a face like
that, someone's going to misunderstand
you.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I350600000_06_160");
    MsgDisp("Himuro","Well, everything in moderation.
I'll come again.");
    MsgDisp("主人公","Yeah, I'll be waiting.
Thank you very much!");
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("I350600000_06_170");
    MsgDisp("Himuro","That's the face I'm talking about!");
    MsgDisp("主人公","(Huh∋)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
