BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,2,2,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723302_07_000");
MsgDisp("Mikage","For the first time, I feel like I feel
something other than fear...");
MsgSel("The other side of fear, right?","Shall we go gain to make sure?","It feels like I can overcome it too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040723302_07_010");
    MsgDisp("Mikage","The feeling of looking at yourself as if
it were someone else.
Is that the other side?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723302_07_020");
        MsgDisp("Mikage","I won't look.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723302_07_030");
        MsgDisp("Mikage","If that's what you really want to do,
that's fine?");
        MsgDisp("主人公","Umm, sorry.
This is enough after all.");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040723302_07_040");
        MsgDisp("Mikage","I see.
But if you're serious, don't hold back.
You always accompany me, after all.");
        MsgDisp("主人公","Eh? That's not my intention. I'm also
having fun...");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040723302_07_050");
        MsgDisp("Mikage","Oh, well that's more important than
anything.
It's a win-win situation.");
        MsgDisp("主人公","Win-win?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040723302_07_060");
        MsgDisp("Mikage","Iy's when both parties benef——");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("B040723302_07_070");
        MsgDisp("Mikage","Haaー, I'm saying such dull things.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040723302_07_080");
        MsgDisp("Mikage","As punishment, I'm jumping again.");
        MsgDisp("主人公","Eh...Ehhh∋ ｛御影＊＊｝∋");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(7);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        SEPlay("EV_SE_AMUSE_007");
        SEWait();
        VoicePlay("B040723302_07_090");
        MsgDisp("Mikage","Uwaaah∈");
        MsgDisp("主人公","(I wonder if ｛御影＊＊｝ will be
okay?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    MsgClose();
    ScrFadeOut(0);
    ChOpen(7,255,7,0,0,#1,#1,0,0,0,0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723302_07_100");
    MsgDisp("Mikage","I'm the opposite of overcoming it.
I gave up.
Don't make me elaborate.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
