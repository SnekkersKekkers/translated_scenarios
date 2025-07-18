BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_652");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I150700000_07_000");
    MsgDisp("Mikage","Oh, you work here?");
    MsgDisp("主人公","Yes.
Please take your time looking around.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I150700000_07_010");
    MsgDisp("Mikage","I think I might end up buying everything
you recommend, so I'm going home.");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I150700000_07_020");
    MsgDisp("Mikage","Well, keep up the fun times at school and
at your part-time job.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(He left...
Why did ｛御影＊＊｝ even
come?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I150700000_07_030");
    MsgDisp("Mikage","Oh.
You're working hard at your part-time job.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Welcome.
Are you looking for something?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("I150700000_07_040");
    MsgDisp("Mikage","You're really looking like a shopkeeper,
huh?");
    MsgDisp("主人公","Um, because I am one?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I150700000_07_050");
    MsgDisp("Mikage","I see, my bad.
Then, I'll buy something to apologize.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_043");
    SEWait();
    MsgClose();
    ChOpen(7,255,1,2,0,#1,#1,0,0);
    VoicePlay("I150700000_07_060");
    MsgDisp("Mikage","I bought too much...");
    MsgDisp("主人公","Thank you very much for your large
purchase.");
    ChEye(7,2);
    ChMouth(7,4);
    ChMotion(7,0);
    VoicePlay("I150700000_07_070");
    MsgDisp("Mikage","You...when was it that you became so good
at business...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I150700000_07_080");
    MsgDisp("Mikage","Haa...
I'll have to cut back on the part-time job
visits.");
    MsgDisp("主人公","(Part-time job visits...?
But I managed to sell a lot!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("I150700000_07_090");
    MsgDisp("Mikage","Oh, working hard?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
What are you looking for today?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I150700000_07_100");
    MsgDisp("Mikage","I could see you from outside.
I just came in.");
    MsgDisp("主人公","I see...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("I150700000_07_110");
    MsgDisp("Mikage","The mood definitely just dropped...
Alright, show me something you recommend.");
    MsgDisp("主人公","Understood!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I150700000_07_120");
    MsgDisp("Mikage","Suddenly you're all cheery.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_043");
    SEWait();
    MsgClose();
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I150700000_07_130");
    MsgDisp("Mikage","I definitely bought too much with this...");
    MsgDisp("主人公","｛御影＊＊｝, are you
okay?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I150700000_07_140");
    MsgDisp("Mikage","Of, of course I'm fine.
You don't need to worry about anything.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("I150700000_07_150");
    MsgDisp("Mikage","Part-time job visits to this place are
dangerous...
I'll go bankrupt soon.");
    MsgDisp("主人公","(｛御影＊＊｝, what happened...?
But, he bought a lot!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
