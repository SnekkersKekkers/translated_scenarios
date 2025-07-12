BGOpen("ex050",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090100000_01_000");
    MsgDisp("Kazama","Want to get fortunes?");
    MsgDisp("主人公","Shall we try our luck this year?");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("S090100001_01_000");
        MsgDisp("Kazama","You've still got the spirit to make 
the best out of everything.");
        MsgDisp("主人公","Yep! Let's have fun!");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        break ;
        case 1:
        ChEye(1,3);
        ChMouth(1,2);
        ChMotion(1,3);
        VoicePlay("S090100002_01_000");
        MsgDisp("Kazama","Huh, what's up with that?
Is there a policy change this year?");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("S090100000_01_010");
    MsgDisp("Kazama","Here, found the thing you like.");
    MsgDisp("主人公","Fortunes!
Woah, it's super popular.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S090100000_01_020");
    MsgDisp("Kazama","So, what should we do?");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("S090100001_01_010");
        MsgDisp("Kazama","Right. 
Let's try our luck this year.");
        MsgDisp("主人公","(I hope you get a good draw!)");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        break ;
        case 1:
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,3);
        VoicePlay("S090100002_01_010");
        MsgDisp("Kazama","Eh, is it really okay?");
        MsgDisp("主人公","I already made my wish.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("S090100002_01_020");
        MsgDisp("Kazama","Heh, that's a mature thing
to say. It's that kind of feeling this
year, huh?");
        MsgDisp("主人公","(Maybe I should have given
it a try......)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    VoicePlay("S090100000_01_030");
    MsgDisp("Kazama","Look, the fortunes are really
popular. What should we do? Feeling
lucky?");
    MsgDisp("主人公","Drawing fortunes......
Should I give it a try?");
    MsgSel("Let's draw fortunes.","It's too crowded.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("S090100001_01_020");
        MsgDisp("Kazama","Right.
I didn't even need to ask.");
        MsgDisp("主人公","You need to do this to start
the year properly, hehe.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("S090100001_01_030");
        MsgDisp("Kazama","You're exaggerating a bit.
Don't get depressed if it's bad, okay?");
        MsgDisp("主人公","(Good luck to you too.)");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        break ;
        case 1:
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("S090100002_01_030");
        MsgDisp("Kazama","Is that okay? Are you kidding?");
        MsgDisp("主人公","It's fine. I thought it
would be better to walk around the 
shrine slowly.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("S090100002_01_040");
        MsgDisp("Kazama","Got it. Let's walk around the
temple grounds. Hold my hand so we
don't get separated.");
        MsgDisp("主人公","Hehe, okay!");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("S090100002_01_050");
        MsgDisp("Kazama","Maybe you'll change your mind
after one lap around. Don't regret it.
We can look for another chance to draw
fortunes.");
        MsgDisp("主人公","(｛風真＊＊｝ is so kind.)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
