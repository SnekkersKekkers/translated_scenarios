BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321302_03_000");
MsgDisp("Honda","Huh...? They're not coming closer. What's
up guys?");
MsgSel("Maybe it's because we just passed the bear cages earlier?","I wonder if they can smell something?","Shall we buy some animal feed?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040321302_03_010");
    MsgDisp("Honda","Ah, that's it!
Sorry everyone, we scared you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040321302_03_020");
    MsgDisp("Honda","...Sorry, did you notice too?
I had some strong ramen earlier.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,0);
        ChMouth(3,2);
        ChMotion(3,2);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040321302_03_030");
        MsgDisp("Honda","Then we still won't figure out the cause.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,3);
        ChMouth(3,4);
        ChMotion(3,2);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040321302_03_040");
        MsgDisp("Honda","Wait wait, I got it...
that's it!");
        MsgDisp("主人公","What is it?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040321302_03_050");
        MsgDisp("Honda","My sister grabbed me as I was leaving the
house today, and when I told her I had a
date, she sprayed some perfume on me.");
        MsgDisp("主人公","It does smell pretty nice actually.");
        ChEye(3,3);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040321302_03_060");
        MsgDisp("Honda","Really? Apparently it's supposed to be a
\"scent that brings love to fruition.\"
...How do you feel about it?");
        MsgDisp("主人公","Um, I'm not sure how to answer that...");
        ChEye(3,1);
        ChMouth(3,1);
        ChMotion(3,5);
        ChEyeOpenLevel(3,0);
        ChCheek(3,5);
        VoicePlay("B040321302_03_070");
        MsgDisp("Honda","Ack, what am I even saying?");
        SEPlay("EV_SE_548");
        SEWait();
        SEPlay("EV_SE_546");
        SEWait();
        ChEye(3,5);
        ChMouth(3,1);
        ChMotion(3,2);
        ChCheek(3,0);
        VoicePlay("B040321302_03_080");
        MsgDisp("Honda","Woah, why is everyone suddenly gathering
around?");
        ChEye(3,4);
        ChMouth(3,4);
        VoicePlay("B040321302_03_090");
        MsgDisp("Honda","Huh? Could it be... the perfume?");
        MsgDisp("主人公","Wow, they've all flocked around
｛本多＊＊｝.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        ChCheek(3,10);
        VoicePlay("B040321302_03_100");
        MsgDisp("Honda","Will you too?");
        MsgDisp("主人公","(Even if you ask me...)");
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
ChCheek(3,0);
