switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100005_01_000");
    MsgDisp("Kazama","We saw some of our classmates on the way
home, right?");
    MsgDisp("主人公","Yeah. Everyone was with friends and
family.");
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,4);
    VoicePlay("S120100005_01_010");
    MsgDisp("Kazama","They weren't paying attention to the
things around them, so I guess they didn't
notice us.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("S120100005_01_020");
    MsgDisp("Kazama","......I see. The reason you're so
oblivious when you're with me is because
you enjoy being with me.");
    MsgDisp("主人公","That's true, I guess?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100005_01_030");
    MsgDisp("Kazama","Hey, say that more confidently.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100005_01_040");
    MsgDisp("Kazama","Maybe this year I'll focus so much on you
that I won't notice anything else?");
    MsgDisp("主人公","Eh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100005_01_050");
    MsgDisp("Kazama","Prepare yourself.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(So focused......
Maybe that was the beginning of something
great......)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100005_01_060");
    MsgDisp("Kazama","We're finally walking side by side.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("S120100005_01_070");
    MsgDisp("Kazama","When we were in 1st grade, I used to run
ahead of you all the time.
So being together like this feels weird.");
    MsgDisp("主人公","Yeah, you were hard to keep
up with......");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("S120100005_01_080");
    MsgDisp("Kazama","Since I entered high school, I started to
pay attention a lot more to the person
next to me......");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("S120100005_01_090");
    MsgDisp("Kazama","It's so different from before. I was
reminiscing a lot. Now I'm walking without
a care in the world.");
    MsgDisp("主人公","Hehe, me too.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100005_01_100");
    MsgDisp("Kazama","I see......
Now we're onto the next issue.");
    MsgDisp("主人公","What's next......?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100005_01_110");
    MsgDisp("Kazama","Now we have to figure out this distance
between us.
Yeah, that's it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Distance? What does he mean...... This
year, ｛風真＊＊｝ and I, will graduate
together......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
