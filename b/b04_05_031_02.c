BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B040503102_05_000");
MsgDisp("Hiiragi","The sound of the water, the darkness, the
air temperature...it's all so calming.");
MsgSel("｛柊＊＊＊｝ is like a fish","Maybe I want a little more excitement?","It should be feeding time soon");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040503102_05_010");
    MsgDisp("Hiiragi","Hehe.
Yes, I wonder if they'd keep me here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040503102_05_020");
        MsgDisp("Hiiragi","Eh, what do you mean?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040503102_05_030");
        MsgDisp("Hiiragi","Eh...");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040503102_05_040");
        MsgDisp("Hiiragi","That's right.
I was too inconsiderate.
Or I was too reliant on you.");
        MsgDisp("主人公","Reliant?");
        ChEye(5,4);
        ChMouth(5,0);
        ChMotion(5,4);
        VoicePlay("B040503102_05_050");
        MsgDisp("Hiiragi","Right. Before I realized it, I was only
seeking comfort in the times in which I
was with you.");
        ChEye(5,0);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040503102_05_060");
        MsgDisp("Hiiragi","That is not my intention either.");
        MsgDisp("主人公","｛柊＊＊＊｝, your voice is a little loud.");
        VoicePlay("B040503102_45_000");
        MsgDisp("Woman A","Eh?
No way?
Huh, Yanosuke-sama∈");
        VoicePlay("B040503102_46_000");
        MsgDisp("Woman B","Waa, amazing, is it really?
I wonder if that girl is Yanosuke-sama's
girlfriend?");
        VoicePlay("B040503102_45_010");
        MsgDisp("Woman A","Ehー, no way.
That would be impossible.");
        ChMotion(5,4);
        VoicePlay("B040503102_05_070");
        MsgDisp("Hiiragi","This person is my special someone.
I apologize for the disturbance.");
        MsgDisp("主人公","(Ehhh∋
That's embarrassing, ｛柊＊＊＊｝...!)");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040503102_05_080");
        MsgDisp("Hiiragi","Sorry.
Let's move to another floor.");
        ChClose(5);
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        SEWait();
        MsgDisp("主人公","(Phew, that surprised me.
My heart is still pounding...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040503102_05_090");
    MsgDisp("Hiiragi","It appears that way.
The fish are beginning to get restless
too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
