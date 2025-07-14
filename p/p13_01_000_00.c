BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
BGOpen("sc721",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","It's a maze～
If you can reach the finish line, you get
to drink freshly squeezed milk～");
    VoicePlay("P130100000_01_000");
    MsgDisp("Kazama?","......Pfft.");
    MsgClose();
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝. Hey, why are you
laughing?");
    ChMotion(1,3);
    VoicePlay("P130100000_01_010");
    MsgDisp("Kazama","That cow print t-shirt fits you.");
    MsgDisp("主人公","｛風真＊＊｝ will also have to wear it.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P130100000_01_020");
    MsgDisp("Kazama","It's unfortunate, but It won't fit me as
well it does you, and it won't be as
funny.");
    MsgDisp("主人公","Hey. If you have free time, try the maze
before your shift!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("P130100000_01_030");
    MsgDisp("Kazama","Yeah, yeah.
Then, I'm oーff.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","Little lost lamb.
Ticket for one～!");
    MsgClose();
    ScrFadeOut(0,0);
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0,0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","This is a maze～
If you can reach the goal, You get to
drink freshly squeezed milk～");
    VoiceEVSPlay(1);
    VoicePlay("P130100000_01_040");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, is it already time to
switch over?");
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    VoicePlay("P130100000_01_050");
    MsgDisp("Kazama","No, I came to see how you were doing, and
there's a spritely-looking cow at the
entrance.");
    MsgDisp("主人公","The calf Molly is already waiting at the
finish line.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P130100000_01_060");
    MsgDisp("Kazama","That's right, \"Find Molly!\", right?");
    MsgDisp("主人公","Right, then why don't you also try it out,
｛風真＊＊｝? There's freshly-squeezed
milk at the finish line.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    ChCheek(1,5);
    VoicePlay("P130100000_01_070");
    MsgDisp("Kazama","When you're wearing that cow-print
t-shirt...... Don't say \"freshly-squeezed
milk \" so loudly.");
    MsgDisp("主人公","Eh?
What's wrong with that?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("P130100000_01_080");
    MsgDisp("Kazama","Haa, it doesn't matter.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,0);
    VoicePlay("P130100000_01_090");
    MsgDisp("Kazama","Well, since I'm here, I might as well get
some milk from Molly.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","Little lost lamb.
Admission for one～!");
    MsgClose();
    ScrFadeOut(0,0);
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
