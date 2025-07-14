BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040508202_05_000");
MsgDisp("Hiiragi","It's been rumoured you can hear the voice
of your companion here.
What do you think of it?");
MsgSel("Seems interesting!","Might be a bit scary.","I think it's a lie.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040508202_05_010");
    MsgDisp("Hiiragi","That's like you.
You have no secrets.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040508202_05_020");
    MsgDisp("Hiiragi","If I'm speaking honestly, it's scary for
me too.
Especially if you're my companion?");
    MsgDispSksp(1,0);
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
        ChMotion(5,0);
        VoicePlay("B040508202_05_030");
        MsgDisp("Hiiragi","Even if it's not true, I don't think it's
a lie either.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040508202_05_040");
        MsgDisp("Hiiragi","I'm relieved.");
        MsgDisp("主人公","Eh?");
        ChEye(5,0);
        VoicePlay("B040508202_05_050");
        MsgDisp("Hiiragi","If you think that, it means you haven't
heard anything of the sort, right?");
        ChEye(5,4);
        ChMotion(5,1);
        VoicePlay("B040508202_05_060");
        MsgDisp("Hiiragi","Even though I had not heard it myself, I
was anxious thinking my inner voice was
being talkative.");
        MsgDisp("主人公","Hehe, ｛柊＊＊＊｝ is your inner voice
talkative?");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040508202_05_070");
        MsgDisp("Hiiragi","Yes, I'm not sure though.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040508202_05_080");
        MsgDisp("Hiiragi","But, if you happen to hear it, please take
it with a grain of salt.");
        MsgDisp("主人公","Hehe.
Then, that goes for me too.");
        ChEye(5,3);
        ChMouth(5,4);
        VoicePlay("B040508202_05_090");
        MsgDisp("Hiiragi","That depends on the contents. If it's
something good, I'll take it at 100
percent accuracy. If it's not, I'll take
it with a grain of salt.");
        MsgDisp("主人公","(I wonder what ｛柊＊＊＊｝ means by
something good?)");
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
