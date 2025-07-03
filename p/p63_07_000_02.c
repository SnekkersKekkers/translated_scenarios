BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc724",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(We're using the vegetables everyone grew
as a meal, and having a herbal tea
pavement cafe, this is my last cutural
festival, a culmination the horticulture
club's efforts...)");
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630700002_07_000");
    MsgDisp("Mikage","Oh, this is an extremely 
stylish cafe this year, huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. There's also a lot of
customers who've come.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P630700002_07_010");
    MsgDisp("Mikage","That's good.
You guys' efforts have born fruit.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P630700002_07_020");
    MsgDisp("Mikage","Although, first I'd like to 
try your signature items.");
    MsgDisp("主人公","Yes.
An order for the organic vegetables set～!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(We're using the vegetables everyone grew
as a meal, and having a herbal tea
pavement cafe, this is my last cutural
festival, a culmination the horticulture
club's efforts...)");
    MsgClose();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630700002_07_030");
    MsgDisp("Mikage","This is amazding, huh.
Isn't it super stylish?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Is it really?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P630700002_07_040");
    MsgDisp("Mikage","Yeah.
And the store clerk is too.");
    MsgDisp("主人公","Hehe, 
thank you very much!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("P630700002_07_050");
    MsgDisp("Mikage","Oh, you agree?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P630700002_07_060");
    MsgDisp("Mikage","I'm looking forwards to 
the food and herbal tea.");
    MsgDisp("主人公","Of course.
What would you like?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P630700002_07_070");
    MsgDisp("Mikage","Then, I'll have your signature please!");
    MsgDisp("主人公","Yes.
An order for the organic vegetables set～!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
