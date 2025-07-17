BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040511102_05_000");
MsgDisp("Hiiragi","I wonder if I'm able to do something that
resembles skating.");
MsgSel("Skating together is fun, right?","Maybe we should buy skates?","Do I look like a figure skater?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040511102_05_010");
    MsgDisp("Hiiragi","Yes, I finally realized how fun it is.
Now, will you give me your hand?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    VoicePlay("B040511102_05_020");
    MsgDisp("Hiiragi","Haha.
I think we've reached that point.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040511102_05_030");
        MsgDisp("Hiiragi","Hmm.
That's a bit of a stretch, isn't it?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        VoicePlay("B040511102_05_040");
        MsgDisp("Hiiragi","Maybe we should wear costumes next time?");
        MsgDisp("主人公","Omg!
Everyone would be surprised, huh?");
        ChEye(5,2);
        VoicePlay("B040511102_05_050");
        MsgDisp("Hiiragi","After we surprise them, I guess they would
boo when they see my skating.");
        MsgDisp("主人公","No way.
It would be a good way to advertise the
Theater Company's Ice Show.");
        ChEye(5,0);
        ChMouth(5,2);
        VoicePlay("B040511102_05_060");
        MsgDisp("Hiiragi","Ehh...");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040511102_05_070");
        MsgDisp("Hiiragi","Your ideas are amazing.
I could never come up with something like
that.");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040511102_05_080");
        MsgDisp("Hiiragi","An Ice Show huh...");
        MsgDisp("主人公","Seeing ｛柊＊＊＊｝ perform on
ice in a beautiful costume would be
wonderful.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040511102_05_090");
        MsgDisp("Hiiragi","Yeah.
I'll try it.");
        MsgDisp("主人公","Ehh?");
        MsgClose();
        SEPlay("EV_SE_559");
        ChClose(5);
        SEWait();
        VoicePlay("B040511102_05_100");
        MsgDisp("Hiiragi","Ahhh!");
        SEPlay("EV_SE_009",0,1);
        ScrQuake(2);
        MsgDisp("主人公","｛柊＊＊＊｝, are you okay∋");
        VoicePlay("B040511102_41_000");
        MsgDisp("Male Customer","What the- that sounds kind of amazing.");
        VoicePlay("B040511102_47_000");
        MsgDisp("Woman Customer","A-Are you okay?");
        VoicePlay("B040511102_05_110");
        MsgDisp("Hiiragi","Ah, uhm, yes.
Sorry for the trouble...");
        MsgClose();
        ChOpen(5,255,0,2,4,#1,#1,0,0);
        VoicePlay("B040511102_05_120");
        MsgDisp("Hiiragi","I think it will be difficult for me to
turn your idea into a reality...");
        MsgDisp("主人公","(Phew, thank goodness nobody got hurt...)");
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
