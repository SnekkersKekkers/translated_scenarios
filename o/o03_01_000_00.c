BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030100000_01_000");
    MsgDisp("Kazama","It's a given if it's us, right?");
    MsgDisp("主人公","(We did it!
We won!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030100000_01_010");
    MsgDisp("Kazama","We should have won, and we did.");
    MsgDisp("主人公","｛風真＊＊｝, we won because
you supported me. Thanks!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,5);
    VoicePlay("O030100000_01_020");
    MsgDisp("Kazama","I, I see......
Isn't that great?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("O030100000_01_030");
    MsgDisp("Kazama","Just this event is enough
for the sports festival.");
    MsgDisp("主人公","(Is ｛風真＊＊｝ just
satisfied by winning first?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("O030100000_01_040");
    MsgDisp("Kazama","We were crazy out there.");
    MsgDisp("主人公","Yeah, we did it, ｛風真＊＊｝!
First place!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("O030100000_01_050");
    MsgDisp("Kazama","Seems like sometimes we're
connected with a red rope in reality
too huh?");
    MsgDisp("主人公","Hehe.
You mean a red thread, right?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100000_01_060");
    MsgDisp("Kazama","A rope is thicker and safer.
Let's stay like this for a while longer.");
    MsgDisp("主人公","(Hehe,
｛風真＊＊｝ seems really happy.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChCheek(1,0);
