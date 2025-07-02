BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,4,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B150500000_05_000");
MsgDisp("Hiiragi","...Heheh.");
MsgDisp("主人公","Umm...
Did I do something strange?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("B150500000_05_010");
MsgDisp("Hiiragi","No, no.
I just remembered something.");
VoicePlay("B150500000_05_020");
MsgDisp("Hiiragi","The cat we kept at the theatre 
troupe a long time ago.");
MsgDisp("主人公","Cat?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B150500000_05_030");
MsgDisp("Hiiragi","I'd stroke his head, rub his belly.
Even though I didn't have any friends, 
they would play with me often.");
MsgDisp("主人公","So that's how it was.");
ChMotion(5,4);
VoicePlay("B150500000_05_040");
MsgDisp("Hiiragi","He would purr with delight, 
then look eannoyed.");
ChEye(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B150500000_05_050");
MsgDisp("Hiiragi","I understand that cat's 
feelings very well now.");
MsgDisp("主人公","Hmm?");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("B150500000_05_060");
MsgDisp("Hiiragi","It's your turn to be the cat.
Get ready. Well, then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(Ehh...?
Having my belly rubbed is a bit...)");
MsgClose();
ScrFadeOut(0,0);
