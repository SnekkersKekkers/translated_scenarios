switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R040100001_01_000");
    MsgDisp("Kazama","You look nice in that dress.");
    MsgDisp("主人公","Really?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("R040100001_01_010");
    MsgDisp("Kazama","Yeah, really.
In the right angle, it looks like you're
shining.");
    MsgDisp("主人公","Hehe, thank you.");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R040100001_01_020");
    MsgDisp("Kazama","That dress fits your smile.");
    MsgDisp("主人公","Really?
That makes me happy.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("R040100001_01_030");
    MsgDisp("Kazama","Just don't get too social at this party.
That dress and smile combo is too
powerful.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("R040100001_01_040");
    MsgDisp("Kazama","Don't play dumb.
You are very attractive today.
Just don't let it get it to your head.");
    MsgDisp("主人公","Jeez, stop being weird!");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,7);
    VoicePlay("R040100001_01_050");
    MsgDisp("Kazama","I don't need anything else in front of me
other than you and that dress.");
    MsgDisp("主人公","｛風真＊＊｝......");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("R040100001_01_060");
    MsgDisp("Kazama","Thanks for coming in that beautiful dress
for me.");
    MsgDisp("主人公","Umm...｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("R040100001_01_070");
    MsgDisp("Kazama","Isn't that right?");
    MsgDisp("主人公","Well, I don't mind.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,0);
    VoicePlay("R040100001_01_080");
    MsgDisp("Kazama","Don't get cocky!");
    MsgDisp("主人公","(Hehe! ｛風真＊＊｝ seemed to really like
my dress.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
