BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,2,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223502_02_000");
MsgDisp("Sassa","Surely it's foul play to scary us with
loud noises?");
MsgSel("Yeah, I want monsters to abide by the rules too.","Seems like someone knocked something over behind the scenes.","Noise? Was there...?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223502_02_010");
    MsgDisp("Sassa","But the fact that rules don't apply to
them, is the scary partー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040223502_02_020");
    MsgDisp("Sassa","Seriously?
That's fine I guess.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223502_02_030");
        MsgDisp("Sassa","You're like this sometimes aren't you?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223502_02_040");
        MsgDisp("Sassa","I expected this.
I won't fall for it.
Even you were surprised.");
        MsgDisp("主人公","Ugh, you caught me.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223502_02_050");
        MsgDisp("Sassa","More importantly, did you see the small
chair at the back of the old well?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223502_02_060");
        MsgDisp("Sassa","Maybe you could only see it from my line
of sight. Maybe it's a break spot for the
ghosts.");
        MsgDisp("主人公","Hehe.
Rather than coming out the old well, 
they're sitting behind it, huh?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040223502_02_070");
        MsgDisp("Sassa","Yeah, they're just playing
on their phones huh?");
        MsgDisp("主人公","Suddenly it's not so scary anymore.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040223502_02_080");
        MsgDisp("Sassa","They probably didn't expect a customer as
tall as me, maybe I'll be able to spot
more funny things");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040223502_02_090");
        MsgDisp("Sassa","Shall we try going again?");
        MsgDisp("主人公","There might be... things we're not
supposed to find?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040223502_02_100");
        MsgDisp("Sassa","Oーi, stop it.
That's enough after all.
Let's go elsewhere!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        SEWait();
        MsgDisp("主人公","(Hehe ｛颯砂＊＊｝ is bad with haunted
houses, It's a bit cute!)");
        MsgClose();
        ScrFadeOut(0);
        ChOpen(2,253,0,0,4,#1,#1,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
