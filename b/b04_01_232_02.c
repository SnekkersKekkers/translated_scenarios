BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,7,4,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(1,4);
ChCheek(1,5);
VoicePlay("B040123202_01_000");
MsgDisp("Kazama","Even though there are a lot of people
around, if you ride this, it's just the
two of us.");
MsgSel("It's a perfect locked room!","They won't know anything no matter what we do huh?","Yeah, it's like a small room.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    ChCheek(1,0);
    VoicePlay("B040123202_01_010");
    MsgDisp("Kazama","Oh. A staple of the mystery genre? Am I
gonna be done in here by you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,7);
        ChCheek(1,10);
        VoicePlay("B040123202_01_020");
        MsgDisp("Kazama","W-What are you saying?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,2);
        ChEyeOpenLevel(1,0);
        ChCheek(1,0);
        VoicePlay("B040123202_01_030");
        MsgDisp("Kazama","That's for sure, if we got to the peak,
the angle won't let us be seen from the
carriage in front...");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,2);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123202_01_040");
        MsgDisp("Kazama","No, I have to think about how long we'll
be at the top.");
        MsgDisp("主人公","Eh, what's this?");
        ChMotion(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        ChCheek(1,10);
        VoicePlay("B040123202_01_050");
        MsgDisp("Kazama","No... no, idiot. That's wrong. That's not
it.");
        MsgDisp("主人公","What do you mean by that?");
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040123202_01_060");
        MsgDisp("Kazama","But, that's the best 
situation isn't it?");
        MsgDisp("主人公","Hey, what are you saying?");
        ChMotion(1,0);
        Wait(12,0);
        ChEye(1,4);
        ChMouth(1,1);
        VoicePlay("B040123202_01_070");
        MsgDisp("Kazama","No, my bad, my bad. But, I've made up my
mind. Now that I've made up my mind, I'm
gonna do it.");
        MsgDisp("主人公","(｛風真＊＊｝, what are you gonna do?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("B040123202_01_080");
    MsgDisp("Kazama","It'd be a problem if it was just a small
room. But it's an attraction, so this
distance is allowed.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
