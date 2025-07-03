BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040522202_05_000");
MsgDisp("Hiiragi","Haa...
It feels as if I'm being crushed 
by the weight of history.");
MsgSel("Isn'yt it the pressure to study?","They're like test questions huh...","It makes you want an easier to understand explanation huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,2);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040522202_05_010");
    MsgDisp("Hiiragi","Harsh...
Yes, that's right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040522202_05_020");
    MsgDisp("Hiiragi","Shall we take a break?
I'm getting dizzy...");
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
        ChMouth(5,2);
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040522202_05_030");
        MsgDisp("Hiiragi","Haa... even then, it may be difficult 
for me to understand.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMotion(5,0);
        VoicePlay("B040522202_05_040");
        MsgDisp("Hiiragi","That's right.
It's difficult for me.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040522202_05_050");
        MsgDisp("Hiiragi","I may not enjoy the historical documents,
but it does feel like we have a several
hundred year old castle to ourselves.");
        MsgDisp("主人公","Eh?");
        ChMotion(5,0);
        VoicePlay("B040522202_05_060");
        MsgDisp("Hiiragi","See, there are usually 
only a few people here.");
        MsgDisp("主人公","Now that you mention it, 
it might be true.");
        ChEye(5,3);
        VoicePlay("B040522202_05_070");
        MsgDisp("Hiiragi","Yes, so why don't we use this extravagant
setting and put on a little play?");
        MsgDisp("主人公","Ehh?
P-play?");
        ChEye(5,0);
        ChMouth(5,0);
        ChMotion(5,0);
        VoicePlay("B040522202_05_080");
        MsgDisp("Hiiragi","\"This short sword is my alter ego. A
guiding light to protect you. My soul will
be with you for eternity.\"");
        MsgDisp("主人公","Ehhh∋
That's like a scene from Habataki
Theatre Troupe's play?");
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040522202_05_090");
        MsgDisp("Hiiragi","No, the line is
\"My soul will also 
be with you for eternity.\"");
        MsgDisp("主人公","Ummm...
\"My soul will also 
be with you for eternity.\"");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040522202_05_100");
        MsgDisp("Hiiragi","Really?
I'll believe you then?");
        MsgDisp("主人公","Ehh?
It was a play...");
        ChEye(5,3);
        ChMotion(5,3);
        VoicePlay("B040522202_05_110");
        MsgDisp("Hiiragi","Heheh, you did well.
Hearing those words from your lips, 
even as a line, made my day.");
        MsgDisp("主人公","(Umm, somehow it seems like I fell right
into ｛柊＊＊＊｝ 's plan.)");
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
