BGOpen("ne210",0);
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040514002_05_000");
MsgDisp("Hiiragi","I can't believe I got to hear
Japanese instruments here... 
I was pleasantly surprised.");
MsgSel("｛柊＊＊＊｝, you're excited huh!","The guy playing the shamisen was so cool!","It seems like they could do a collab with Habataki Theatre Troupe.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040514002_05_010");
    MsgDisp("Hiiragi","Excited?
I was listening intently, yes but...");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040514002_05_020");
        MsgDisp("Hiiragi","Cool?
Wasn't it a performance?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040514002_05_030");
        MsgDisp("Hiiragi","\"The guy\" huh...");
        MsgDisp("主人公","Eh?");
        ChMouth(5,0);
        ChMotion(5,0);
        VoicePlay("B040514002_05_040");
        MsgDisp("Hiiragi","I know how to play the shamisen too.
I won't lose to him.");
        MsgDisp("主人公","Him?");
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040514002_05_050");
        MsgDisp("Hiiragi","Just now you said 
that guy was cool.");
        MsgDisp("主人公","｛柊＊＊＊｝, what's wrong?");
        ChEye(5,4);
        ChMotion(5,1);
        VoicePlay("B040514002_05_060");
        MsgDisp("Hiiragi","Perhaps it's jealousy.
I was envious that you had 
praised another person.");
        MsgDisp("主人公","Ehhh∋");
        ChMouth(5,0);
        ChMotion(5,2);
        VoicePlay("B040514002_05_070");
        MsgDisp("Hiiragi","I had considered holding back,
but it was impossible.
My feelings towards you are so great, 
it would be foolish to conceal them.");
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040514002_05_080");
        MsgDisp("Hiiragi","Haa.
I feel better now, 
so that's the end of it.");
        MsgDisp("主人公","(Ehh, ｛柊＊＊＊｝ was jealous? I feel like
I heard something really significant...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChMotion(5,4);
    VoicePlay("B040514002_05_090");
    MsgDisp("Hiiragi","Yeah, it was interesting. A combination of
live music and drama huh...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
