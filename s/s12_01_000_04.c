MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("ex020",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100004_01_000");
    MsgDisp("Kazama","Wow, that was crowded, huh?");
    MsgDisp("主人公","Hehe, thanks for coming with me.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("S120100004_01_010");
    MsgDisp("Kazama","How was the last New Year's visit of your
high school years?");
    MsgDisp("主人公","Ahh, you're right.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100004_01_020");
    MsgDisp("Kazama","...Geez, did you just realize that?
Such an ungrateful person.
You're still the same as always.");
    MsgDisp("主人公","Geez, seems like there's going to be a lot
of nagging from ｛風真＊＊｝
this year too...");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100004_01_030");
    MsgDisp("Kazama","The feeling is mutual.
See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(My last New Year shrine visit as a
Habataki student. I'm glad it was with
｛風真＊＊｝.)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","It feels like we should run into someone
we know when it's this crowded.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100004_01_040");
    MsgDisp("Kazama","I think I recognized a few?
You just didn't notice them.");
    MsgDisp("主人公","Eeh∋
No one came to say hi to me?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100004_01_050");
    MsgDisp("Kazama","Well I guess they were hesitant when they
saw the two of us together.");
    MsgDisp("主人公","Oh, really?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100004_01_060");
    MsgDisp("Kazama","Uh-huh. I'll explain that part to you
slowly on our way home. Let's get you
home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100004_01_070");
    MsgDisp("Kazama","It's our last New Year's visit as high
schoolers.
Do you have any regrets?");
    MsgDisp("主人公","Oh right, it's the last one.");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("S120100004_01_080");
    MsgDisp("Kazama","When I was overseas, I imagined what it
would be like to visit the shrine with you
every year.");
    MsgDisp("主人公","Yeah, I hope we can keep going together.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoiceEVSPlay(1);
    VoicePlay("S120100004_01_090");
    MsgDisp("Kazama","｛主人公｝, the weather's changed
a bit somehow...
Is it going to snow?");
    MsgDisp("主人公","Perhaps rain?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100004_01_100");
    MsgDisp("Kazama","Then, please be careful that you don't
slip and fall. Here. I'll take you home.");
    MsgDisp("主人公","Hehe, thank you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
