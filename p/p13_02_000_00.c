BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc721",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like our attraction 'Find Molly in
the giant maze' is attracting a lot of
attention more and more people are
gathering...)");
    MsgClose();
    ChOpen(2,254,3,0,0,#1,#1,0,0);
    VoicePlay("P130200000_02_000");
    MsgDisp("Sassa","As expected from Mikage's class.
A lot of effort was put in.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Welcome.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("P130200000_02_010");
    MsgDisp("Sassa","A giant maze.
Seems super fun.");
    MsgDisp("主人公","Yeah. The person who reaches the goal in
the quickest time receives this
cow-patterned t-shirt as a present!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("P130200000_02_020");
    MsgDisp("Sassa","Matching with you, huh... interesting.
I'll break the record.");
    MsgDisp("主人公","Then, admission for oーne!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,#1);
    ChMouth(2,#1);
    ChCheek(2,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc721",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like our attraction 'Find Molly in
the giant maze' is attracting a lot of
attention more and more people are
gathering...)");
    MsgClose();
    ChOpen(2,254,3,0,3,#1,#1,0,0);
    VoicePlay("P130200000_02_030");
    MsgDisp("Sassa","Eeeh, you made something super impressive.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Are you going to try it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P130200000_02_040");
    MsgDisp("Sassa","Sounds good.
Then, who is Molly?");
    MsgDisp("主人公","Mikage-sensei's family cow.
The inside of the maze is modelled after
the image of a ranch.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P130200000_02_050");
    MsgDisp("Sassa","Then, you're also wearing a cow-print
shirt because...?");
    MsgDisp("主人公","Yeah.
Isn't it cute?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P130200000_02_060");
    MsgDisp("Sassa","Y-Yeah.");
    MsgDisp("主人公","Everyone who reaches the goal receives
freshly squeezed milk as a present.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("P130200000_02_070");
    MsgDisp("Sassa","F-Freshly squeezed...");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,1);
    ChCheek(2,10);
    VoicePlay("P130200000_02_080");
    MsgDisp("Sassa","Got it, I'll go for the fastest record.");
    MsgDisp("主人公","Admission for one!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,#1);
    ChMouth(2,#1);
    ChCheek(2,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
