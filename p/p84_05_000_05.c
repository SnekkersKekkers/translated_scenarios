ScrFadeIn(0);
VoicePlay("P840500005_40_000");
MsgDisp("Male Student A","I removed the maps giving wrong
information, but the leaflets I replaced
them with are also wrong...");
MsgDisp("主人公","Ehhh∋
Then we have to retrieve those leaflets!");
VoicePlay("P840500005_40_010");
MsgDisp("Male Student A","They've already been distributed, 
so that would be impossible.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,0,4,-1,-1,0,0);
VoicePlay("P840500005_05_000");
MsgDisp("Hiiragi","What's the matter.");
MsgDisp("主人公","The maps with incorrect information about
the inside of the school have been
distributed. What should we do...");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("P840500005_05_010");
MsgDisp("Hiiragi","Please calm down. What kind of things were
incorrect about it?");
MsgDisp("主人公","Now that I think about it,
what was wrong with it?");
VoicePlay("P840500005_40_020");
MsgDisp("Male Student A","Ummm...");
VoicePlay("P840500005_48_000");
MsgDisp("School Girl","I heard that the characters 
for 'staff room' were wrong?");
MsgDisp("主人公","Umm... is that it?");
VoicePlay("P840500005_41_040");
MsgDisp("Male Student B","Seriously?");
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P840500005_05_020");
MsgDisp("Hiiragi","There's probably no need to
forcefully retrieve it, right?");
MsgDisp("主人公","Yeah... From the start I should have
checked what it was. I'm very sorry.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("P840500005_05_030");
MsgDisp("Hiiragi","There's no need to be impatient in
dealing with these matters, 
Let's approach it with compsure.");
MsgDisp("主人公","(Haa... it's as ｛柊＊＊＊｝ says.
I have to work more calmly...
I failed even though it was 
my last cultural festival.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
