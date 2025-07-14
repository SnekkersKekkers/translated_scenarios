ChOpen(3,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,6);
    VoicePlay("N020300003_03_000");
    MsgDisp("Honda","Oof...");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. What's wrong?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    ChEyeOpenLevel(3,#1);
    VoicePlay("N020300003_03_010");
    MsgDisp("Honda","I was trying to look for your name from
the top, but my eyes got tired before I
found it... Sorry.");
    MsgDisp("主人公","(Oof...
I've got to study harder...)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("N020300003_03_020");
    MsgDisp("Honda","Gah, did you really do that?");
    MsgDisp("主人公","Did what?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300003_03_030");
    MsgDisp("Honda","You know, like forgetting to write your
name, or putting your answers in the wrong
column. I do that a lot.");
    MsgDisp("主人公","Ah, umm...");
    ChEye(3,5);
    ChMouth(3,5);
    ChMotion(3,5);
    VoicePlay("N020300003_03_040");
    MsgDisp("Honda","Huh∋　Am I wrong∋");
    MsgDisp("主人公","(｛本多＊＊｝ believes that my results are
unbelievable...
I've got to study harder...)");
    break ;
    case 4:
    case 5:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300003_03_050");
    MsgDisp("Honda","Hey, am I taking away your study time?");
    MsgDisp("主人公","Huh, ｛本多＊＊｝...?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("N020300003_03_060");
    MsgDisp("Honda","At home, my younger sister often tells me
to leave because I'm disturbing her
studies.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("N020300003_03_070");
    MsgDisp("Honda","If I'm bothering you or anything, feel
free to tell me, so it doesn't get in the
way of your studies.");
    ChEye(3,2);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("N020300003_03_080");
    MsgDisp("Honda","I have so much fun with you that I can't
stop talking...");
    MsgDisp("主人公","No, that's not it.
It's because of my lack of effort.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300003_03_090");
    MsgDisp("Honda","I see, I guess that's fine but...");
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("N020300003_03_100");
    MsgDisp("Honda","It's actually not fine at all!");
    MsgDisp("主人公","∋");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300003_03_110");
    MsgDisp("Honda","Do you need me to help you study?
Ask me anything you don't get.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("N020300003_03_120");
    MsgDisp("Honda","If I say something unnecessary, please
stop me and let me know!");
    MsgDisp("主人公","Okay, thank you...");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300003_03_130");
    MsgDisp("Honda","I'll look into how I can teach you.
I want you to see how fun it is to learn.");
    MsgDisp("主人公","(Thank you, ｛本多＊＊｝.
I've got to study much harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
