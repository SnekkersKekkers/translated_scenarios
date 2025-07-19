BGOpen("ho000",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ScrFadeIn(0);
    VoicePlay("S120700003_07_000");
    MsgDisp("Mikage","Oh, we've already arrived.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700003_07_010");
    MsgDisp("Mikage","I'm still just starting to do those 100
things I want to do.");
    MsgDisp("主人公","Yep.
It's still just the beginning.
At least today we did one thing.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("S120700003_07_020");
    MsgDisp("Mikage","Ah, you're right.
We did a shrine visit.");
    MsgDisp("主人公","Yep, today we got to finish it.
So, what's the number one thing you want
to do?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700003_07_030");
    MsgDisp("Mikage","There it is, your bad habit. You like to
move too quickly. You need to have
patience, otherwise things are boring.");
    MsgDisp("主人公","Uhm...
Then...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700003_07_040");
    MsgDisp("Mikage","That's right...
See you later then.");
    MsgDisp("主人公","Eh?
Just like that...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700003_07_050");
    MsgDisp("Mikage","Take it easy.
See you.");
    MsgDisp("主人公","Yeah.
Thanks for spending time with me today.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700003_07_060");
    MsgDisp("Mikage","Of course.
I'll be waiting to see you at school
again, okay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(I'm already a third year since spring...
I hope I can go with ｛御影＊＊｝ again
next year...)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for bringing me home.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("S120700003_07_070");
    MsgDisp("Mikage","Ah, my apologies for dragging you around
so much today. But thanks to you, the year
is off to a great start.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝, do you have to go to
school today too?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700003_07_080");
    MsgDisp("Mikage","I know I said I'm going to school, but I'm
just taking a peek at the gardening club's
fields.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700003_07_090");
    MsgDisp("Mikage","Earlier, everyone prayed for the pumpkins
to grow well and healthy, so don't worry.");
    MsgDisp("主人公","Hehe, that's a very kind wish from
｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700003_07_100");
    MsgDisp("Mikage","Really?
At the same time, I also prayed for the
real pumpkin to be healthy and strong.");
    MsgDisp("主人公","Eh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700003_07_110");
    MsgDisp("Mikage","Do you realize how red you're turning,
Miss Pumpkin?
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","Ah, thank you so much!");
    MsgDisp("主人公","(I hope I can be with ｛御影＊＊｝ on
New Year's next year too.
Alright, let's try our best this year!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
