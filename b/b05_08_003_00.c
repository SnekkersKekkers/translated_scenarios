MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne100",1);
ChLayout(1);
MsgClose();
ChOpen(8,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChMouth(8,5);
ChEyeOpenLevel(8,10);
VoicePlay("B050800300_08_000");
MsgDisp("Shirahane","Ah!");
MsgDisp("主人公","What's wrong?");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,1,1);
VoicePlay("B050800300_08_010");
MsgDisp("Shirahane","Wait here for a bit!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(8);
MsgDisp("主人公","???");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
MsgClose();
SEPlay("EV_SE_717",0.3,0.6);
ChOpen(8,255,0,3,3,0,-1,0,0);
SEStop("EV_SE_717",0.5);
VoicePlay("B050800300_08_020");
MsgDisp("Shirahane","Sorry to keep ya waiting!");
MsgDisp("主人公","Yeah.
That's a big bag, did you buy something?");
ChEye(8,0);
ChMouth(8,3);
VoicePlay("B050800300_08_030");
MsgDisp("Shirahane","Hehe! Hehe, why don't we hang out a little
longer?");
MsgDisp("主人公","Eh, that's fine but...");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B050800300_08_040");
MsgDisp("Shirahane","Then, let's go to karaoke!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(8);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
StlOpen("ev_08_04");
StlEye(8,1);
StlMouth(8,0);
BGMPlay("BGM_C08_DAICHI_I",0.01);
ScrFadeIn(0);
VoicePlay("B050800300_08_050");
MsgDisp("Shirahane","How's it?
Does it suit me?");
MsgDisp("主人公","Ahaha!
｛大地＊＊｝ is so cute!");
StlEye(8,2);
StlMouth(8,0);
VoicePlay("B050800300_08_060");
MsgDisp("Shirahane","I'm cute, huh!");
MsgDisp("主人公","Yeah, cute!");
StlEye(8,0);
StlMouth(8,0);
VoicePlay("B050800300_08_070");
MsgDisp("Shirahane","Well, that's fine but...
I guess I can't be like Nana 
after all.");
MsgDisp("主人公","Eh?");
StlEye(8,0);
StlMouth(8,0);
VoicePlay("B050800300_08_080");
MsgDisp("Shirahane","I saw a photo of the high school
model Nana wearing this item. ");
StlEye(8,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5);
VoicePlay("B050800300_08_090");
MsgDisp("Shirahane","He looked super cool... 
I wondered if I could've 
pulled it off too...");
MsgDisp("主人公","Hehe, is that right?");
StlEye(8,2);
StlMouth(8,0);
VoicePlay("B050800300_08_100");
MsgDisp("Shirahane","As I thought, it's different for a model.
That's how it is. Haha!");
MsgDisp("主人公","(...But I wonder how one would 
look cool wearing that hat and doll?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
ChPrmTblAdd(8,0);
