BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc723",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P630500001_05_000");
    MsgDisp("Hiiragi","｛主人公｝.
I see that you're working hard.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Welcome.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500001_05_010");
    MsgDisp("Hiiragi","The herb's wonderful fragrance is
inviting.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500001_05_020");
    MsgDisp("Hiiragi","You're selling vegetables too, yes?");
    MsgDisp("主人公","Yeah. Both were grown by the horticulture
club. The vegetables were harvested in the
morning!");
    ChMotion(5,3);
    Wait(20,1);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("P630500001_05_030");
    MsgDisp("Hiiragi","Heheh, how spirited!
Then could you allow me to have a look?");
    MsgDisp("主人公","Yes, absolutely!
One cutsomer, this way please!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P630500001_05_040");
    MsgDisp("Hiiragi","｛主人公｝,
The store seems to be popular, yes?");
    MsgDisp("主人公","Ah,｛柊＊＊＊｝!
Welcome.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500001_05_050");
    MsgDisp("Hiiragi","Maybe I should have came by earlier.");
    MsgDisp("主人公","It's alright.
Becayse there's still lots of both
herb tea and vegetables!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P630500001_05_060");
    MsgDisp("Hiiragi","Was it all grown by the 
horticulture club?");
    MsgDisp("主人公","Yes. The summer
vegetables are still delicious.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P630500001_05_070");
    MsgDisp("Hiiragi","I look forward to it.
I was able to see the face 
of the producer up close.");
    MsgDisp("主人公","Yes, please buy some♪
Entry for one customer!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(5,0);
