BGOpen("sc721",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like our attraction 'Find Molly in
the giant maze' is attracting a lot of
attention more and more people are
gathering...)");
    MsgClose();
    ChOpen(5,254,3,3,2,#1,#1,0,0);
    VoicePlay("P130500000_05_000");
    MsgDisp("Hiiragi","Your class is amazing.
As expected of Mikage-sensei...");
    MsgDisp("主人公","｛柊＊＊＊｝, did you come to see it?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P130500000_05_010");
    MsgDisp("Hiiragi","Yes, I felt as if I were drawn in.
What is this?");
    MsgDisp("主人公","A giant maze
If you can reach the end goal,
you get to drink freshly squeezed milk?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,9);
    VoicePlay("P130500000_05_020");
    MsgDisp("Hiiragi","Wow, that's overwhelming... At any rate,
I'll take the challenge, please.");
    MsgDisp("主人公","Yay♪
Entry for one please～!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","It's a maze～
If you can reach the finish line, 
you get to drink freshly squeezed milk～");
    MsgClose();
    ChOpen(5,254,0,3,2,#1,#1,0,0);
    VoicePlay("P130500000_05_030");
    MsgDisp("Hiiragi","A classroom maze...");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, welcome.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P130500000_05_040");
    MsgDisp("Hiiragi","Yes, it was your class who did this.
It's amazing, isn't it; this idea?");
    MsgDisp("主人公","If you're interested, surely you can try
it out?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P130500000_05_050");
    MsgDisp("Hiiragi","Maze, cow, cow milk...
and you in a cow-print shirt.
I'm already intrigued.");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("P130500000_05_060");
    MsgDisp("Hiiragi","I accept this challenge from you and
Mikage-sensei.");
    MsgDisp("主人公","Yes♪
Admission for one～!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(5,0);
