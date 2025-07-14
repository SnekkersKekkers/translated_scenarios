BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc724",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts in the
Gardening Club...)");
    MsgClose();
    ChOpen(5,254,2,0,4,#1,#1,0,0);
    VoicePlay("P630500002_05_000");
    MsgDisp("Hiiragi","This is amazing...");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝! Welcome..");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500002_05_010");
    MsgDisp("Hiiragi","An organic cafe, this is full fledged,
huh...");
    MsgDisp("主人公","Hehe, we gave it our best!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500002_05_020");
    MsgDisp("Hiiragi","This is a stylish shop, though as is the
store employee.");
    MsgDisp("主人公","Yay!");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500002_05_030");
    MsgDisp("Hiiragi","And there's food too, yes?");
    MsgDisp("主人公","Of course, that's 
what I'm most proud of.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500002_05_040");
    MsgDisp("Hiiragi","I understand.
Then, can I have your recommendation?");
    MsgDisp("主人公","Certainly!
Then, follow me to your seat.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts in the
Gardening Club...)");
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P630500002_05_050");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","｛柊＊＊＊｝! You came. Welcome!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500002_05_060");
    MsgDisp("Hiiragi","Yes, pardon the intrusion. I wanted to see
the herbs and vegetables you grew, I was
impressed by how splendid your cafe is.");
    MsgDisp("主人公","Thank you!
Do you like it?");
    ChMotion(5,3);
    Wait(15,0);
    ChEye(5,3);
    ChMouth(5,4);
    VoicePlay("P630500002_05_070");
    MsgDisp("Hiiragi","Of course.
It wouldn't even be strange if it opened
in the waterfront area.");
    MsgDisp("主人公","Thank you.
I also have faith in the food.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500002_05_080");
    MsgDisp("Hiiragi","Yes, I'm looking forward to it.
I'll have your recommendation please.");
    MsgDisp("主人公","Hehe, certainly!
Then, I'll guide you to your seat.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(5,0);
